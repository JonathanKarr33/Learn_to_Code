import UIKit

var age:Int = 18

if age >= 16 {
    print("You can get a drivers lisense in the U.S.")
}
else{
    print("You cannot have a drivers lisense in the U.S.")
}

var any:Character = "a"

switch any {
case "a":
    print("It matches the first case")
default:
    print("It does not match any case above.")
}

for i in 1...5{
    print(i*2)
}

var experience:Int = 0
var j=0
while j <= age {
    experience += j
    j+=1
}

print("Your age is " + String(age) + " and your experience is " + String(experience))

func ageAndExperience (a:Int,b:Int)->Int{
    return a+b
}

var ans:Int = ageAndExperience(a: age, b: experience)
print(ans , "is your age and experience")

class Team{
    var number:Int = 0
    var name:String = ""
    
    func statement(number:Int,name:String) -> String {
        return "Your team number is " + String(number) + " and team name is " + name + "."
    }
}

let myTeam = Team()
myTeam.number = 33
myTeam.name = "Killer Bees"

let nolanTeam = Team()
nolanTeam.number = 2834
nolanTeam.name = "The Bionic Blackhawks"
print(myTeam.statement(number: myTeam.number, name: myTeam.name))
