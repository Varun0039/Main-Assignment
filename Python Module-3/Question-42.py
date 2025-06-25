d={'p':120,'q':300,'r':800}
d1={'p':120,'q':300}
d3={}
for key in d:
     if key in d1:
        d3[key]=d[key]+d1[key]
print(d3)
