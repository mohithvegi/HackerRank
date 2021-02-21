#  https://www.hackerrank.com/challenges/crush/submissions/code/103895511?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#!/bin/python

import math
import os
import random
import re
import sys


# Complete the arrayManipulation function below.
def arrayManipulation(n, queries):
    A = [0]*n

    for query in queries:
        A[query[0]-1] += query[2]
        if(query[1] != n):
            A[query[1]] -= query[2]

    Max = 0
    s = 0
    for element in A:
        s = s + element
        if(Max < s):
            Max = s

    return Max        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = raw_input().split()

    n = int(nm[0])

    m = int(nm[1])

    queries = []

    for _ in xrange(m):
        queries.append(map(int, raw_input().rstrip().split()))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()


