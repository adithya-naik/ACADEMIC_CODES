import tkinter as tk
from tkinter import*

def write_message():
 print("Tkinter is easy to use for creating GUI!")
 res = "You wrote " + txt1.get()
 print(res)


root = tk.Tk()
root.title("Welcome to first GUI in Python!!")
root.geometry('350x200')

frame = tk.Frame(root)
frame.pack()

lab1 = Label(root, text='First Label-Label 1!')
lab1.pack()
lab2 = Label(root, text= 'Enter text here: ')
lab2.pack(side=tk.LEFT)

txt1 = Entry(root, width=10)
txt1.pack(side=tk.LEFT)

Submit_button = tk.Button(frame,text="Submit",fg="green",command=write_message)
Submit_button.pack(side=tk.LEFT)

quit_button = tk.Button(frame,text="QUIT",fg="red",command=quit)
quit_button.pack()

root.mainloop()
