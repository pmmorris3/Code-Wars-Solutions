def int32_to_ip(int32):
    l = []
    b = str(tobin(int32))
    while (len(b) < 32):
        b = "0" + b
    for i in range(0,4):
        l.append(b[8*i: (8*i + 8)])
    for i in range(0,4):
        if (l[i] == ''):
            l[i] = 0
    return '.'.join([str(todec(str(f))) for f in l])
def tobin(n):
    return int(bin(n)[2:])
def todec(n):
    return int(n,2)