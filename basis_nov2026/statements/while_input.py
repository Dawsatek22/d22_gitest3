# Dit is een python code om een waarde te typen  in string en een reactie van terug printen in een while loop
val = input()
while True:
    val = input()
    if val == "a":
        print("loop gaat nog")
    if val == "b":
        print("loop breaks")
    if val == "c":
        print("loop is ook door gegaan")
    elif val == "d":
        print("while loop breekt en stopt")
        break