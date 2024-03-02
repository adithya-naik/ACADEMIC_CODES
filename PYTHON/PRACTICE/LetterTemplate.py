name=input("Enter your name :")
date=input ("Enter today's date :")
letter='''HELLO MYNAME!
Welcome to the Online Python Course.
In this course we will make you a perfect coder in python.

Have a nice day.
 
COURSE DATE U HAVE ENROLLED :MYDATE'''

letter=letter.replace("MYNAME",name)
letter=letter.replace("MYDATE",date)
print("\n")
print(letter)