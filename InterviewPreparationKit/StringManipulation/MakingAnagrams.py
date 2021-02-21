# https://www.hackerrank.com/challenges/ctci-making-anagrams/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=strings


#!/bin/python

import math
import os
import random
import re
import sys

# Complete the makeAnagram function below.
def makeAnagram(a, b):
    A = {}
    B = {}
    
    for i in range(len(a)):
        A[a[i]] = 0

    for i in range(len(b)):
        B[b[i]] = 0    

    for i in range(len(a)):
        A[a[i]] = A[a[i]] + 1
    
    for i in range(len(b)):
        B[b[i]] = B[b[i]] + 1
    
    l1 = []
    l2 = []
    L1 = list(a)
    L2 = list(b)
    for i in L1:
        if i not in l1:
            l1.append(i)
    for i in L2:
        if i not in l2:
            l2.append(i)    
    L = []
    count = 0
    
    for c1 in l1:
        if c1 not in l2:
            count = count + A[c1]
        else:
            L.append(c1)
    
    LN = []
    for i in L:
        if i not in LN:
            LN.append(i)

    for c2 in l2:
        if c2 not in l1:
            count = count + B[c2]

    for c in LN:
        n1 = A[c]
        n2 = B[c]
        if n1>n2:
            count = count + (n1-n2)
        elif n2>n1:
            count = count + (n2-n1)

    # print LN
    # print A
    # print B    

    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = raw_input()

    b = raw_input()

    res = makeAnagram(a, b)

    fptr.write(str(res) + '\n')

    fptr.close()
