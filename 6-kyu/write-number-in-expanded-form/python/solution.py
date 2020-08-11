def expanded_form(num):
    k = 0
    while (10 ** k <= num): 
        k += 1
    digits = []
    val = num
    for i in range(0,k):
        w = val % 10
        digits.append(w)
        val = (val-w)//10
    summands = []
    m = 0
    for x in digits:
        p = str(x * (10 ** m))
        if p != "0":
            summands.append(p)
        m += 1
    summands = summands[len(summands)::-1]
    return " + ".join(summands)