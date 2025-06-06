s="python is a programming language"
s=s.split()
scount={}

for i in s:
    if i in scount:
        scount[i]=scount[i]+1
    else:
        scount[i]=1
    
print(scount)