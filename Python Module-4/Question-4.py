n=int(input("Enter number of lines to read: "))
file=open("Assignment/Python Module-4/myfile.txt", "r")

for i in range(n):
    line=file.readline()
    if not line:
        break
    print(line, end="")

file.close()
