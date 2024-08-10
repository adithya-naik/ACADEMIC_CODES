import re
regex=re.compile(r"\d{10}")
pat = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
while True:
    mobno=input("enter mobile number : ")
    if len(mobno)==10:
        result=regex.search(mobno)
        if result:
            print("valid mobile number")
            break
    else:
        print("invalid mobile number")

while True:
    email=input("Enter E-mail address : ")
    if re.match(pat,email):
        print("Valid Email")
        break
    else:
        print("Invalid Email")
