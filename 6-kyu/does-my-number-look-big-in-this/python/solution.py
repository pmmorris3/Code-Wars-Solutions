def narcissistic( n ):
    k = 0
    digits = []
    val = n
    while (10**k <= abs(n)):
      k += 1
    for i in range(0,k):
        w = val % 10
        digits.append(w)
        val = (val - w)//10
    sum = 0
    for x in digits:
        sum += x ** k
    return sum == n