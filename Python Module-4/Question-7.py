file=open("Assignment/Python Module-4/myfile.txt", "r")
data=""

for line in file:
    data+=line

file.close()
print(data)
