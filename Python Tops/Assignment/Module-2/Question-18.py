s=input("Enter a string:")
if len(s)>=3:
    if s.endswith('ing'):
        s=s+'ly'
    else:
        s=s+'ing'
print(s)
