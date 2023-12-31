import os

folder_path = "D:\Programming\Problems solves\Codeforces\Codes"
output_file = "D:\Programming\Problems solves\Codeforces\Readme.md" 

qs = "[Question](https://codeforces.com/problemset/problem/"
sol = "[Solution](https://github.com/ShazidMashrafi/Codeforces-Solutions/tree/master/Codes/"
space = "%20"

folder_names = [str(folder_name) for folder_name in os.listdir(folder_path)]
entries = []

for folder_name in folder_names:
    Problem_id, Problem_name = folder_name.split(' - ')
    number, code = Problem_id.split(' ')
    name = Problem_name.replace(' ', space)
    question_link =  qs + number + "/" + code + ")"
    solution_link =  sol + number + space + code + space +  '-' + space + name + ")"
    entry = Problem_id + " | " + Problem_name + " | " + question_link + " | " + solution_link
    entries.append(entry)

entries.sort(key=lambda x: int(x.split(' ')[0]))

Intro_file = "D:\Programming\Problems solves\Codeforces\Readme Generator Assets\Intro section.txt"
Outro_file = "D:\Programming\Problems solves\Codeforces\Readme Generator Assets\Outro section.txt"

with open(Intro_file, 'r') as start:
    intro_lines = start.readlines()

with open(Outro_file, 'r') as end:
    outro_lines = end.readlines()

with open(output_file, 'w') as file:
        file.write(''.join(intro_lines))
        file.write('\n| ')
        file.write('\n| '.join(entries))
        file.write('\n')
        file.write(''.join(outro_lines))
