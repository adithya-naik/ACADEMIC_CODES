
lwr = 1
upr = 100

def check(num):
    c = 0
    for i in range(1,num+1):
        if(num%i == 0):
            c = c+1
    if c==2:
        print(num,end  = " ")

print("Prime numbers between", lwr, "and", upr, "are:")

for n in range(lwr,upr+1):
    check(n)


            


