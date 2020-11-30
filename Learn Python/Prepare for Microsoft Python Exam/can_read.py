inventory = open("inventory.txt",'r')
eof =False
while eof == False:
    line = inventory.readline()
    if line != '':
        if line != "\n":
            print(line)
        else:
            print("End of file")
            eof = True
            inventory.close()