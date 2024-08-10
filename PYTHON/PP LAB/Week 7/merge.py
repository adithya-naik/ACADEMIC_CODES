import shutil

print("Enter 'x' to exit.")
filename1 = input("Enter the first file name to merge: ")
if filename1 == 'x':
    exit()
else:
    filename2 = input("Enter the second file name to merge: ")
    filename3 = input("Enter the name of the new file to merge content: ")

print("\nMerging the content of", filename1, "and", filename2, "into", filename3)

with open(filename3, "wb") as wfd:
    for f in [filename1, filename2]:
        with open(f, "rb") as fd:
            shutil.copyfileobj(fd, wfd, 1024 * 1024 * 10) 

print("\nContent merged successfully!")
print("Want to see the merged content? (y/n): ")
check = input().lower()
if check == 'n':
    exit()
else:
    print()
    with open(filename3, "r") as c:
        print(c.read())
