def has_duplicates(vlist):
    n=len(vlist)
    rep=[]
    for i in range(n):
        k=i+1
        for j in range(k,n):
            if vlist[i]==vlist[j]:
                return 'True'
    return 'False'
input_string=input("Enter the list elements:")
vlist= input_string.split()
print(has_duplicates(vlist))

