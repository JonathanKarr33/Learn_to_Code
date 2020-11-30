import random
def is_correct(a,b):
    if a==b:
        return str(str(a) + " matches the random number. CONGRATULATIONS!")
    else:
        return str("You guessed " + str(a) + ". That does not equal " + str(b) + ". Sorry YOU LOSE.")
n = int(input("Enter a random number from 1 to 100: "))
x = random.randint(1,100)
ans = is_correct(n,x)
print (ans)