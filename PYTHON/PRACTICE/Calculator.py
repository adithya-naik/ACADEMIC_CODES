a=eval(input("Enter the first number : \n"))
b=eval(input ("Enter second number : \n"))
c=0
print("1.Addition\n2.Substraction\n3.Multiply\n4.Division\n")
ch=input("Enter the option : ")
match ch:
    case "1":
        c=a+b
        print("The Answer is : ",c)
    case "2":
        c=a-b
        print("The Answer is: ",c)
    case "3":
        c=a*b
        print("The Answer is:",c)
    case "4":
        c=a/b
        print("The Answer is :",c)
        