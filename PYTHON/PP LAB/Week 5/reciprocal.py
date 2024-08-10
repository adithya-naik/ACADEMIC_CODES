def reciprocal(num1):
    try:
        reci = 1/num1
    except ZeroDivisionError :
        print("We can't Divivde by ZERO ")
    else:
        print(reci)

reciprocal(4)
reciprocal(0)