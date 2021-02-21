# https://www.hackerrank.com/challenges/caesar-cipher-1/problem

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the caesarCipher function below.
def caesarCipher(s, k):
    # 65-90 , 97-122

    k = k%26
    result = ""
    length = len(s)

    for i in range(length):
        a = ord(s[i])
        if(a>=65 and a<=90):
            d = a+k
            if d > 90:
                d = 64 + d - 90
            result += chr(d)
        elif(a>=97 and a<=122):
            d = a+k
            if d > 122:
                d = 96 + d - 122
            result += chr(d)
        else:
            result += chr(a)

    return result


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    k = int(input())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
