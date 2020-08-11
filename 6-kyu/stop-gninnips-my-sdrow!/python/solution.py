def spin_words(sentence):
    arr = sentence.split()
    new = []
    for x in arr:
        if len(x) >= 5:
            x = x[len(x)::-1]
        new.append(x)
    return " ".join(new)