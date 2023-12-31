import os

folder_path = "D:\Programming\Problems solves\Codeforces\Codes"
output_file = "D:\Programming\Problems solves\Readme.txt" 
qs = "[Question](https://codeforces.com/problemset/problem/"
sol = "[Solution](https://github.com/ShazidMashrafi/Codeforces-Solutions/tree/master/Experiment/"
space = "%20"

folder_names = [str(folder_name) for folder_name in os.listdir(folder_path)]
entries = []

for folder_name in folder_names:
    id, name = folder_name.split(' - ')
    number, code = id.split(' ')
    question_link =  qs + number + "/" + code + ")"
    solution_link =  sol + number + space + code + space +  '-' + space + name + ")"
    entry = "| " + id + " | " + name + " | " + question_link + " | " + solution_link
    entries.append(entry)



with open(output_file, 'w') as file:
    file.write('\n'.join(entries))
