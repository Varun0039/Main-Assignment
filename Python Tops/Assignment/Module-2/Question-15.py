s="Python is python"
s=s.split()
s1={}
for i in s:
    if i in s1:
        s1[i]=s1[i]+1
    else:
        s1[i]=1
for i in s1:
    print("Word:",i,':',s1[i])