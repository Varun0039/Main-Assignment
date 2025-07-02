try:
    a=int(input("Enter a number: "))
    result=10/a
    print("Result:", result)
except ZeroDivisionError:
    print("Error: Cannot divide by zero.")
finally:
    print("Execution completed.")
