def anagrams(word, words):
    anagrams = [ ]
    word_set = set(word)
    word_dict = { }
    for x in word_set:
        word_dict[x] = list(word).count(x)
    for x in words:
        words_set = set(x)
        words_dict = { }
        for y in words_set:
            words_dict[y] = list(x).count(y)
        if words_dict == word_dict:
            anagrams.append(x)
    return anagrams