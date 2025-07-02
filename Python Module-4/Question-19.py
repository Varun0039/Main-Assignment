try:
    num=int(input("Enter an odd number: "))
    
    if num%2==0:
        raise ValueError("Even number entered! Only odd numbers are allowed.")
    
    print("You entered a valid odd number:", num)

except ValueError as e:
    print("Error:", e)
