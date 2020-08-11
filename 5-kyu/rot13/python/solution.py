def rot13(message):
    upper = [ ]
    lower = [ ]
    rotted = ""
    for x in range(ord('A'),ord('Z')+1):
        upper.append(chr(x))
    for x in range(ord('a'),ord('z')+1):
        lower.append(chr(x))
    for x in message:
        index = 0
        if x in upper or x in lower:
            if x.isupper() == 1:
                index = upper.index(x)
                rotted += upper[(index+13)%26]
            if x.isupper() == 0:
                index = lower.index(x)
                rotted += lower[(index+13)%26]
        else:
            rotted += x
    return rotted