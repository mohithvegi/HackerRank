# https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true


#!/bin/python

import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    types = {}
    for bird in arr:
        if bird not in types:
            types[bird] = 1
        else:
            types[bird] += 1
    freq = 0
    for t in types:
        freq = max(freq, types[t])

    for t in types:
        if types[t] == freq:
            return t

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(raw_input().strip())

    arr = map(int, raw_input().rstrip().split())

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
