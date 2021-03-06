# https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps


#!/bin/python

import math
import os
import random
import re
import sys

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    length1 = len(s1)
    length2 = len(s2)
    d1 = {}
    d2 = {}
    for i in range(length1):
        c = s1[i]
        if c not in d1:
            d1[c] = 1
        else:
            d1[c] += 1
    for i in range(length2):
        c = s2[i]
        if c not in d2:
            d2[c] = 1
        else:
            d2[c] += 1
    count = 0
    for i in d1:
        if i in d2:
            count += 1
    if count > 0:
        return "YES"
    else:
        return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        s1 = raw_input()

        s2 = raw_input()

        result = twoStrings(s1, s2)

        fptr.write(result + '\n')

    fptr.close()
