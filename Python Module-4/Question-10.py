file=open("Assignment/Python Module-4/myfile.txt", "r")
text=file.read()
file.close()

words=text.split()
frequency = {}

for word in words:
    word=word.lower()
    if word in frequency:
        frequency[word]+=1
    else:
        frequency[word]=1

print(frequency)
