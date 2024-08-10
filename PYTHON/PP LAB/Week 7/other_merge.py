data1=data2=" "
print("Enter 'x' for exit")
file1=input("enter first file name to merge:")
if file1=='x':
    exit()
else:
    file2=input("enter second file to merge:")
    file3=input("enter file")
    print("merging content of two files:")
    with open(file1) as fp:
        data1=fp.read()
    with open(file2) as fp:
        data2=fp.read()
    data1+="\n"
    data1+=data2
    with open(file3,'w') as fp:
        fp.write(data1)
    print("contents merged successfully")
    print("do you want to see(y/n)")
    check=input()
    if(check=='n'):
        exit()
    else:
        c=open(file3,'r')
        print(c.read())
        c.close()
        
