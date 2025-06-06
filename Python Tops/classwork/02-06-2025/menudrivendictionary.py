while True:
    menu="""
         press 1 for squaring
         press 2 to find occurence
         press 3 for addition of same keys
         press 4 for exit
    """
    print(menu)
    choice=int(input("Enter choice:"))

    if choice==1:
        def fun1():
            d={}
            for i in range(1,31):
                d[i]=i*i
            print(d)
        fun1()

    elif choice==2:
        def fun2(s):
          
            d={}
            for i in s:
                if i in d:
                    d[i]+=1
                else:
                    d[i]=1
            print(d)
        s=(input("Enter a string:"))
        fun2(s)
    
    elif choice==3:
        def fun3():
            d={'p':120,'q':300,'r':800}
            d1={'p':120,'q':300}
            d3={}
            for key in d:
                if key in d1:
                    d3[key]=d[key]+d1[key]
            print(d3)
        fun3()
    
    elif choice==4:
        def fun4():
            print("Exit")
        fun4()
        break
    
    else:
        print("Invalid choice")
        break