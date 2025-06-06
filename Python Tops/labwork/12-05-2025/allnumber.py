i=1
sum=0
evsum=0
odsum=0
evcount=0
odcount=0

while(i<=5):
    n=int(input("Enter a number:"))
    i=i+1
    if(n%2==0):
        print('even')
        evsum=evsum+n
        evcount=evcount+1
    else:
        print('odd')
        odsum=odsum+n
        odcount=odcount+1
print('evensum is:',evsum)
print('oddsum is:',odsum)
print('evencount is:',evcount)
print('oddcount is:',odcount)

