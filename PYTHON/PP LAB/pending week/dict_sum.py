# Python3 Program to find sum of
# all items in a Dictionary

# Function to print sum


def returnSum(myDict):
	list = []
	for i in myDict:
		list.append(myDict[i])
	final = sum(list)

	return final


# Driver Function
dict = {'1a': 100, '123b': 200, '131c': 300}
print("Sum :", returnSum(dict))
