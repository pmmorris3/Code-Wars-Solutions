def find_uniq(arr):
    count = 0
    for x in arr:
        if x != arr[0]:
            count += 1
            n = x
    if count > 1:
        n = arr[0]
    return n   # n: unique integer in the array