i=1
evsum=0
odsum=0
evcount=0
odcount=0
sum=0
summ=0
while(i<=5):
    n=int(input('Enter a number:'))
    i=i+1
    if(n%2==0):
        print('Even')
        evcount=evcount+1
        evsum=evsum+n
    else:
        print('Odd')
        odcount=odcount+1
        odsum=odsum+n
    sum=sum+n
    summ=summ+i
print('evencount is:',evcount)
print('oddcount is:',odcount)
print('evensum is:',evsum)
print('oddsum is:',odsum)
print('All sum is:',sum)
print('Sum:',summ)