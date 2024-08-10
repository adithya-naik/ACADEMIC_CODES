def is_palindrome(String):
    length = len(String)
    end = length-1
    start =0
    for i in range(end):
        if(String[i] != String[end]):
            return False
        else:
            return True
        end = end -1

name = input("Enter the String : ")
res = is_palindrome(name)
print(res)
# if res:
#     print("Yes ... Its a Palindrome")
# else:
#     print("No ... Its not a Palindrome")
           
