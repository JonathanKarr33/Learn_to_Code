def guess():
    character = "t"
    your_character=""
    guess_count=0
    guess_limit=3
    while character != your_character and guess_count < guess_limit:
        your_character= str(input("Guess a character: "))
        guess_count+=1
    if character != your_character:
        print ("You lose")
    else:
        print ("You win")