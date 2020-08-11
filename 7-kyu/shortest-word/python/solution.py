def find_short(s):
    arr = s.split()
    l = arr[0]
    for x in arr:
        if len(l) > len(x):
            l = x
    return len(l) # l: shortest word length