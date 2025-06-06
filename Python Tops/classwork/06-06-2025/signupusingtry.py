import random
d={}
otp=random.randint(1001,9999)

while True:
    menu=  """
    press 1 for signup
    press 2 for login
    press 3 for forget password
    press 4 for exit
"""
    print(menu)
    try:
        choice=int(input("Enter choice:"))
        if  choice==1:
            name=(input("Enter name:"))
            email=(input("Enter email:"))
            mno=int(input("Enter mobile number:"))
            password=int(input("Enter password:"))
            cpassword=int(input("Enter password agian:"))

            if password==cpassword:
                d["name"]=name
                d["email"]=email
                d["mno"]=mno
                d["password"]=password
                print("Signup succesfully")

            else:
                print("password and conform password does not match")

        elif choice==2:
            email=(input("enter email:"))
            password=int(input("Enter password:"))

            if d["email"] == email and d["password"]==password:
                print("Login succesfull")
            else:
                print("Wrong details entered")

        elif choice==3:
            email=(input("enter email:"))
            if(d["email"]==email):
                print("Your otp is:",otp)
            else:   
                print("Your entered email is incorrect")
            cotp=int(input("Enter otp"))
            if otp==cotp:
                password=int(input("Enter new password:"))
                d["password"]=password
            else:
                print("Otp does not match")
            
                

        elif choice==4:
            print("Thank You")
            break
        else:
            print("Invalid choice")
            break
    except:
        print("Invalid Choice")
