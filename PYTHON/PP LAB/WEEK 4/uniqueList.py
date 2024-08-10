def uniqueList(vlist): 
    final_list = [] 
    for num in vlist: 
        if num not in final_list: 
            final_list.append(num) 
    return final_list
input_string=input("Enter the list elements:")
vlist= input_string.split()
print("New list with only the unique elements:")
print(uniqueList(vlist))

