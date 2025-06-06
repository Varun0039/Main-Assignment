l1=[]
n=int(input("Enter size of list:"))
for i in range(1,n+1):
    n1=int(input("Enter in list:"))
    l1.append(n1)
l1.sort()

print(l1)
print("Smallest:",l1[0])
print("Largest:",l1[-1])
print("Second Largest:",l1[-2])