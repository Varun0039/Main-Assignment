def sum_of_divisors(n):
    total=0
    for i in range(1,n+1): 
        if n%i==0:
            total+=i
    return total

num=int(input("Enter a number:"))
result=sum_of_divisors(num)
print("Sum of all divisors of", num, "is:",result)
