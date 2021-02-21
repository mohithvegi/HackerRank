# https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays


#!/bin/python
import sys
arr = []
maxi = 0
i=0
j=0
c = []
for arr_i in xrange(6):
    arr_temp = map(int,raw_input().strip().split(' '))
    arr.append(arr_temp)
while(i<4):
    while(j<len(arr_temp)-2):
        maxi = arr[i][j] + arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
        c.append(maxi)
        j=j+1
    j=0
    i=i+1
print max(c)