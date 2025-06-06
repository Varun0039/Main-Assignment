try:
    n=int(input("Enter number:"))
    if n%2==0:
        print("Even")
    else:
        print("Odd")

except ValueError as e:
    print(e)

else:
    print("Try executed")
finally:
    print("Finally Executed")



