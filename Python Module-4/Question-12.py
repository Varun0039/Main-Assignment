a=open("Assignment/Python Module-4/myfile.txt", "r")
b=open("Assignment/Python Module-4/copyfile.txt", "w")

for line in a:
    b.write(line)
    
a.close()
b.close()
