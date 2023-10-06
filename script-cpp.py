import os
import readline

lines = [
    '// [**** Constructors ****]',
    '',
    '// [**** Overload Assignment Operators ****]',
    '',
    '// [**** Member Functions ****]',
    '',
    '// [**** Destructor ****]',
]

def path_completer(text, state):
    dir_part, file_part = os.path.split(text)

    current_dir = dir_part if dir_part else "./"
    entries = os.listdir(current_dir)

    matches = [entry for entry in entries if entry.startswith(file_part)]

    if state < len(matches):
        return os.path.join(dir_part, matches[state])
    else:
        return None

readline.set_completer_delims('\t')
readline.parse_and_bind('tab: complete')
readline.set_completer(path_completer)

relative_path = input('Enter the file path: ')

home_directory = os.path.expanduser("~")

file_path = os.path.join(home_directory, relative_path)

os.makedirs(os.path.dirname(file_path), exist_ok=True)

try:
    with open(file_path, 'a') as file:
        file.write('\n'.join(lines) + '\n')
    print('Success!', file_path)
except Exception as e:
    print('Error writing to file:', e)