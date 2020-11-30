from random import randrange, randint
list1 = []
list2 = []
for item in range (50):
    item = randrange(5,105,5)
    list1.append(item)
print (list1)
for num in range (50):
    num = (randint(1,20)*5)
    list2.append(num)
print(list2)