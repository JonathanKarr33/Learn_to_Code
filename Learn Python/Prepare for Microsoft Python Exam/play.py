class people:
    def __init__ (self,name,gender,age,relationship):
        self.name = name
        self.gender = gender
        self.age = age
        self.relationship = relationship
    def old (self):
        n = input("Do you think that you are old? Enter Y or N: ")
        n = n.upper()
        if n == "Y":
            if self.age >=75:
                print ("That could be true")
            else:
                print ("You are not old")
        elif n == "N":
            print ("You will always be young")
        else:
            print ("invalid input")
            self.old()
