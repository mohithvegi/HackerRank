# https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays


nd = raw_input().split()
n = int(nd[0])
d = int(nd[1])
a = map(int, raw_input().rstrip().split())

def leftRotate(Arr, n):
    for i in range(n):
        first = Arr[0]
        Arr.remove(Arr[0])
        Arr.append(first)
    
    return Arr

result = leftRotate(a, d)
for i in result:
    print i,