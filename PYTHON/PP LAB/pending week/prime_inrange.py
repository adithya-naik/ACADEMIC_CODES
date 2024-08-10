def prime(num):
    if num == 1 :
         return False
    else:
        c = 0
        for j in range(2,num):
            if(num%j == 0):
                c = c+1
                break
        if c == 0:
            return True
        else :
            return False



print("prime numbers in range of 1 - 10")
for k in range(1,11):
    if prime(k):
        print(str(k) + " ")