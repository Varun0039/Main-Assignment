s="i am not poor"
a=s.find('not')
b=s.find('poor')

if a!=-1 and b!=-1 and a<b:
    s=s[:a]+"good"+s[b+4:]

print(s)