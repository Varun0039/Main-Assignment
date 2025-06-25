import random
file_path = 'example.txt'

with open(file_path, 'r') as file:
    lines = file.readlines() 

if lines:  
    random_line = random.choice(lines)
    print("Random Line:", random_line.strip())
else:
    print("The file is empty.")
