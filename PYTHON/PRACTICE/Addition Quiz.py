import random

a=random.randint(0, 9)
b=random.randint(0, 9)

k=eval(input("what is "+str(a)+"+"+str(b)+"?\n"))

print(k,"is",a+b==k)