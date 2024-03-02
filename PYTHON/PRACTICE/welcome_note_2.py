name=input("ENter your name :")
f_name=input("Enter your fathers name : ")
m_name=input("Enter yur mothers name :")
date=input("ENter your enrolled date(dd/mm/yyyy) : ")

final='''
Greetings from "PEOPLES TECH MEDIA" ,we are glad to inform you that we are going to select to you as a project designer in our company.

Name : NAME
Fathers name : FATHER NAME
Mothers name : MOTHER NAME
Date of joining : DATE


'''

final=final.replace("NAME",name)
final=final.replace("FATHER NAME",f_name)
final=final.replace("MOTHER NAME",m_name)
final=final.replace("DATE",date)

print(final)

