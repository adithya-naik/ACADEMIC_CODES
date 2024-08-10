import random
classSize =23
numTrails = 1000
dupeCount=0
foundDupe = False

for trail in range(numTrails):
    birthdayList = []
    for i in range(classSize):
        newBday = random.randint(1,365)
        birthdayList.append(newBday)
# print(birthdayList)

for num in birthdayList:
    if birthdayList.count(num)>1:
        foundDupe = True
    if foundDupe ==True:
        dupeCount = dupeCount+1
prob = dupeCount/numTrails
print("The probability of a shared birthday in a class of ",classSize," is: ",prob)