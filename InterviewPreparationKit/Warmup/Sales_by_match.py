# https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

import sys


n = int(raw_input().strip())
c = map(int,raw_input().strip().split(' '))
d = list(set(c))
pairs = 0
for number in d:
    pairs = pairs + ((c.count(number))/2)
    
print pairs