class RomanNumerals:
    def to_roman(n):
        numerals = {
        1   :"I" ,
        4   :"IV",
        5   :"V" ,
        9   :"IX",
        10  :"X" ,
        40  :"XL",
        50  :"L" ,
        90  :"XC",
        100 :"C" ,
        400 :"CD",
        500 :"D" ,
        900 :"CM",
        1000:"M" ,
        }
        str = []
        while (n > 0):
            if (n >= 1000):
                str.append(numerals[1000])
                n -= 1000
            if (1000 > n >= 900):
                str.append(numerals[900])
                n -= 900
            if (900 > n >= 500):
                str.append(numerals[500])
                n -= 500
            if (500 > n >= 400):
                str.append(numerals[400])
                n -= 400
            if (400 > n >= 100):
                str.append(numerals[100])
                n -= 100
            if (100 > n >= 90):
                str.append(numerals[90])
                n -= 90
            if (90 > n >= 50):
                str.append(numerals[50])
                n -= 50
            if ( 50 > n >= 40):
                str.append(numerals[40])
                n -= 40
            if (40 > n >= 10):
                str.append(numerals[10])
                n -= 10
            if (10 > n >= 9):
                str.append(numerals[9])
                n -= 9
            if (9 > n >= 5):
                str.append(numerals[5])
                n -= 5
            if (5 > n >= 4):
                str.append(numerals[4])
                n -= 4
            if (4 > n >= 1):
                str.append(numerals[1])
                n-=1
        return ''.join(str)  
    def from_roman(str):
        numerals = {
        "I" : 1,
        "IV": 4,
        "V" : 5,
        "IX": 9,
        "X" : 10,
        "XL": 40,
        "L" : 50,
        "XC": 90,
        "C" : 100,
        "CD": 400,
        "D" : 500,
        "CM": 900,
        "M" : 1000,
        }
        n = 0
        i = 0
        while (i < len(str)):
            N = len(str)
            if (str[i] == 'I' and i != N-1):
                if (str[i+1] != 'I'):
                    duo = str[i] + str[i+1]
                    n += numerals[duo]
                    i += 1
                else:
                    n += numerals[str[i]]
            elif (str[i] == 'X' and i != N-1):
                if (str[i+1] != 'X' and str[i+1] != 'V' and str[i+1] != 'I'):
                    duo = str[i] + str[i+1]
                    n += numerals[duo]
                    i += 1
                else:
                    n += numerals[str[i]]
            elif (str[i] == 'C' and i != N-1):
                if (str[i+1] != 'C' and str[i+1] != 'X' and str[i+1] != 'L' and str[i+1] != 'V' and str[i+1] != 'I'):
                    duo = str[i] + str[i+1]
                    n += numerals[duo]
                    i += 1
                else:
                    n += numerals[str[i]]
            else:
                n += numerals[str[i]]
            i += 1
        return n
        
        