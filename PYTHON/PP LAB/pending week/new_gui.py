import tkinter as tk
from tkinter import messagebox

def submit_action():
    # Get the values from the text fields
    value1 = entry1.get()
    value2 = entry2.get()
    # Display the values in a message box
    messagebox.showinfo("Submitted Values", f"Value 1: {value1}\nValue 2: {value2}")

def reset_action():
    # Clear the text fields
    entry1.delete(0, tk.END)
    entry2.delete(0, tk.END)

# Create the main window
root = tk.Tk()
root.title("Simple Wizard")

# Create and place the labels
label1 = tk.Label(root, text="Label 1:")
label1.grid(row=0, column=0, padx=10, pady=10)

label2 = tk.Label(root, text="Label 2:")
label2.grid(row=1, column=0, padx=10, pady=10)

# Create and place the text fields
entry1 = tk.Entry(root)
entry1.grid(row=0, column=1, padx=10, pady=10)

entry2 = tk.Entry(root)
entry2.grid(row=1, column=1, padx=10, pady=10)

# Create and place the buttons
submit_button = tk.Button(root, text="Submit", command=submit_action)
submit_button.grid(row=2, column=0, padx=10, pady=10)

reset_button = tk.Button(root, text="Reset", command=reset_action)
reset_button.grid(row=2, column=1, padx=10, pady=10)

# Run the application
root.mainloop()
