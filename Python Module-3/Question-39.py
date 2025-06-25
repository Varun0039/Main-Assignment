d={'a':10,'b':20,'c':30}
keytocheck=input("Enter key to be searched:")

for key in keytocheck.split(','):
    if key in d:
        print(key,"exits in dictionary")
    else:
        print(key,"Does not exist in dictionary")