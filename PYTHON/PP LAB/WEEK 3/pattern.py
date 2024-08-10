def f1():
    print("+",4*"-","+",4*"-","+")

def f2():
    for x in [1,2,3,4]:
        print("|",4*" ","|",4*" ","|")

def call():
    f1()
    f2()
    f1()
    f2()
    f1()

call()
