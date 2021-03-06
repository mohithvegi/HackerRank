# https://www.hackerrank.com/challenges/flipping-bits/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=miscellaneous


#!/bin/python

import math
import os
import random
import re
import sys

# Complete the flippingBits function below.
def flippingBits(n):
    binary = "{:032b}".format(n)
    flip = ""
    for i in binary:
        if i=='0':
            flip += '1'
        else:
            flip += '0'
    return int(flip, 2)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        n = int(raw_input())

        result = flippingBits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
