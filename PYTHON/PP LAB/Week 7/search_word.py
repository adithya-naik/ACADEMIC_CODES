
def search(str,w):
    if(search_word in strings):
        # print("word found is: "+search_word)
        return True

    else:
    # print("word not found")
        return False


file = open("./adi.txt","r")
strings = file.read()
# print(strings)
search_word = input("enter a word you want to search in file: ")
print(search(strings,search_word))

