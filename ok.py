with open("k.txt", 'r') as f:
    lines = f.readlines()

problem_codes = [line.split('|')[1].strip() for line in lines if '|' in line]
duplicates = set([code for code in problem_codes if problem_codes.count(code) > 1])

if duplicates:
    print("Duplicate entries found for these problem codes:", ', '.join(duplicates))
else:
    print("No duplicate entries found.")