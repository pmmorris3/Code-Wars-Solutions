def valid_parentheses(string):
    bool = False
    open = 0
    if len(string) == 0:
        return True
    for x in string:
        if x == "(":
            if bool == False and open == 0:
                bool = True
            open += 1
        if x == ")" and bool == True:
            if open - 1 == 0:
                bool = False
            open -= 1
        elif x == ")" and (bool == False or open == 0):
            return False
        
    return open == 0