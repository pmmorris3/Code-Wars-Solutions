def xo(s):
    ex = 0
    oh = 0
    for x in s:
        if x.lower() == 'x':
            ex += 1
        if x.lower() == 'o':
            oh += 1
    return ex == oh