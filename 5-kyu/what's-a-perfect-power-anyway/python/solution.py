from math import sqrt,log,floor

def isPP(n):
    for x in range(2,floor(sqrt(n)) + 1):
        w = log(n,x)
        w = round(w,7)
        if w.is_integer() == 1:
            return [x,int(w)]