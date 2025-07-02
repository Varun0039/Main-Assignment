n=int(input("Enter number of last lines to read: "))

file=open("Assignment/Python Module-4/myfile.txt", "r")
lines=file.readlines()

for line in lines[-n:]:
    print(line, end="")

file.close()
