d={}
for i in range(1,31):
    d[i]=i*i
print(d)

s= input("Enyter a string:")
d={}
for i in s:
    if i in d:
        d[i]+=1
    else:
        d[i]=1

print(d)


# l=[1,4,3]
# l1=[6,7,8]
# d={}
# for i in range(len(l)):
#     d[l[i]]=l1[i]
# print(d)

d={'p':120,'q':300,'r':800}
d1={'p':120,'q':300}
d3={}
for key in d:
     if key in d1:
        d3[key]=d[key]+d1[key]
print(d3)

d2={}
for i,j in d.items():
    for k,l in d1.items():
        if i==k:
            d3[i]=j+l
        else:
            d3[i]=j
print(d3)