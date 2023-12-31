import os
import re

# Replace with the path to the directory containing the folders you want to rename
path_to_folders = "D:\Programming\Problems solves\Codeforces\Codes"

for folder_name in os.listdir(path_to_folders):
    first_name, second_name = folder_name.split(' ', 1)
    new_name = f"{first_name} - {second_name}"
    new_first_name = re.sub(r'(\d+)([A-Z])', r'\1 \2', new_name)
    os.rename(os.path.join(path_to_folders, folder_name), os.path.join(path_to_folders, new_first_name))