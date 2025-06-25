d={'a':10,'b':20,'c':30}
keytocheck=input("Enter key to be searched:")
if keytocheck in d:
    print(keytocheck,"exits in dictionary")
else:
    print(keytocheck,"Does not exist in dictionary")