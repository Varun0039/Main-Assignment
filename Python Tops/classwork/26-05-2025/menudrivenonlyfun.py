menu = """
press 1 for middle string
press 2 for length of string
press 3 for palindrome
press 4 for exit
"""

def fun(s):
    s1 = len(s) // 2
    if len(s) % 2 == 0:
        print("Please enter odd length string")
    else:
        print(s[s1-1] + s[s1] + s[s1+1])

def fun2(n):
    c = n[::-1]
    if c == n:
        print("Number is palindrome")
    else:
        print("Number is not palindrome")

def fun3(n):
    print("Length of string is:", len(n))

def fun4():
    print("Exiting program.")
    exit()
