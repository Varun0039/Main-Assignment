def perfect():
    sumofdivisor=0
    for i in range(1,n):
        if n%i==0:
            sumofdivisor+=i
    if sumofdivisor==n:
        print("Number  is perfect")
    else:
        print("Number is not perfect")
n=int(input("Enter n:"))
perfect()