name = input("What is your name: ")
age = ""
while age == "":
    try:
        age = int(input("What is your age: "))
    except ValueError:
        print ("Invalid input. Enter an integer. Try again.")
def hello (name,age):
    return "Hello " + name + ". You are " +str(age) + " years old."
answer = hello (name,age)
print (answer)