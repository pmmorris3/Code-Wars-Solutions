def find_it(seq):
    for x in seq:
        count = 0
        for y in seq:
            if x == y:
                count += 1
        if count % 2 == 1:
            return x
    return None
