i=1
evsum=0
odsum=0
evcount=0
odcount=0
sum=0

for i in range(1,6):
   n=int(input("Enter n:"))
   if(n%2==0):
      print("even")
      evsum=evsum+n
      evcount=evcount+1
   else:
      print("odd")
      odsum=odsum+n
      odcount=odcount+1

   sum=sum+n
print("evsum:",evsum)
print("evcount",evcount)
print("odsum:",odsum)
print("odcount",odcount)
print("Sum:",sum)