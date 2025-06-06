try:
    n=int(input("Enter number:"))
    n1=int(input("Enter number:"))
    print("Div:",n/n1)

except ZeroDivisionError as e:
    print(e)

except ValueError as e:
    print(e)
