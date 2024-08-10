def do_twice(f, word):
    f(word)
    f(word)
def print_twice(string):
    print(string)
    print(string)

newWord = "spam"
do_twice(print_twice, newWord)	
