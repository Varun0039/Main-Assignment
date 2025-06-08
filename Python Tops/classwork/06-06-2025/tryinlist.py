try:
    l=[1,3,45,54,21]
    n=int(input("Enter Index:"))
    print("value:",l[n])

except IndexError as e:
    print(e)
except ValueError as e:
    print(e)

