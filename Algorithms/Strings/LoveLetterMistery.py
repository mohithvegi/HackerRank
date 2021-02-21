# https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?isFullScreen=true

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the theLoveLetterMystery function below.
def theLoveLetterMystery(s):
    length = len(s)
    end = length-1
    count = 0
    for index in range(int(length/2)):
        first = s[index]
        last = s[end-index]
        d1 = ord(first)
        d2 = ord(last)
        if(d1!=d2):
            d = abs(d1-d2)
            count += d
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = theLoveLetterMystery(s)

        fptr.write(str(result) + '\n')

    fptr.close()
