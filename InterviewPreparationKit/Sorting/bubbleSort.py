# https://www.hackerrank.com/challenges/ctci-bubble-sort/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=sorting


n = int(raw_input().strip())
a = map(int, raw_input().strip().split(' '))
count = 0

for i in range(0,n):
    for j in range(0,n-1):
        if a[j] > a[j+1]:
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp
            count = count + 1

print "Array is sorted in " + str(count) + " swaps."
print "First Element: " + str(a[0])
print "Last Element: " + str(a[-1])
