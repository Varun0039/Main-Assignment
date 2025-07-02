file=open("Assignment/Python Module-4/myfile.txt", "r")
linecount=0

for line in file:
    linecount+=1

file.close()
print("Number of lines:", linecount)
