list1=["Apple", "Banana", "Cherry", "Mango"]
file=open("Assignment/Python Module-4/myfile.txt", "w")

for item in list1:
    file.write(item + "\n")

file.close()
