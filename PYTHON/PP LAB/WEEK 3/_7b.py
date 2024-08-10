def do_twice(f, word):
    f(word)
    f(word)

def print_spam(word):
    print(word)
    
word = input('What word to repeat?\n')
do_twice(print_spam, word)
