def is_sorted(a):
    for i in range(len(a)-1):
        if a[i]>=a[i+1]:
            return False
    return True
input_string=input("Enter the list elements:")
vlist=input_string.split()
print(is_sorted(vlist))
