from play import people
n = input ("What is your name: ")
try:
    a = int(input("What is yor age: "))
except ValueError:
    print ("That is a value error. Enter an integer for your age")
g = input("What is your gender: ")
r = input("What is your relationship: ")
person_1 = people(n,a,g,r)

person_1.old()