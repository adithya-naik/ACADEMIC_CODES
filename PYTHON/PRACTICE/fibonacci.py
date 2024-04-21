n = int(input("Enter the number of terms : "))
n1 = 0
n2 = 1

for i in range(1,n+1):
    print(n1,end = " ")
    nth = n1+n2
    n1 = n2
    n2 = nth
    