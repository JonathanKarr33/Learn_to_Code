class student:
    def __init__(self,name,gpa,is_on_probation):
        self.name = name
        self.gpa = gpa
        self.is_on_probation = is_on_probation
    def status (self):
        if self.is_on_probation == False:
            if self.gpa >= 4.350:
                return (self.name + " is a Validictorian and has highest honors. " + self.name + "'s GPA is " + str(self.gpa))
            elif self.gpa >= 4.000:
                return (self.name + " has highest honors. " + self.name + "'s GPA is " + str(self.gpa))
            elif self.gpa >= 3.750:
                return (self.name + " has high honors. " + self.name + "'s GPA is " + str(self.gpa))
            elif self.gpa >= 3.500:
                return (self.name + " has honors. " + self.name + "'s GPA is " + str(self.gpa))
            else:
                return (self.name + " does not have honors.")
        else:
            return (self.name + " is on probation.")
