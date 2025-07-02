file=open("Assignment/Python Module-4/myfile.txt", "a")
file.write("i am varun")
file.close()

file=open("Assignment/Python Module-4/myfile.txt", "r")
content=file.read()
print(content)
file.close()
