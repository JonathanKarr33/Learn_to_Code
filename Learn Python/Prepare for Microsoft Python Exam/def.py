from random import random
def age():
    try:
         n= int(input("How old are you: "))
         return "You are " +str(n) +" years old."
    except:
         print ("Not a valid input")
         age()
age()
a = age()
print (a)