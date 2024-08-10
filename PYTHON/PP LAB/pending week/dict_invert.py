def invert_dict(d):
    """Function to invert a dictionary."""
    return {v: k for k, v in d.items()}


    # Read dictionary from user
n = int(input("Enter the number of items in the dictionary: "))
user_dict = {}
    
for i in range(n):
    key = input("Enter key: ")
    value = input("Enter value: ")
    user_dict[key] = value
    
    # Invert the dictionary
inverted_dict = invert_dict(user_dict)
    
print("Original dictionary:", user_dict)
print("Inverted dictionary:", inverted_dict)

