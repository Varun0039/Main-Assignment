class A:
    pass

class B(A):
    pass

obj=B()

print(isinstance(obj, A))  
print(isinstance(obj, B))  
print(isinstance(obj, object))  
