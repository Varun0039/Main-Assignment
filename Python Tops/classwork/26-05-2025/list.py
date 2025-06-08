l=[10,20,True,'varun']
print(type(l))

l.append(30)
print(l)
l.extend([40,50,60])
print(l)
print(l.count('varun'))
l.pop()
print(l)
l.remove(10)
print(l)
l.insert(2,'nikhil')
print(l)