d={'a':10,'b':20,'c':30}
v=[]
for values in d.values():
    if values not in v:
        v.append(values)
v=sorted(v,reverse=True)

for values in v:
        for keys in  d:
             if d[keys]==values:
                  print(keys,':',values)