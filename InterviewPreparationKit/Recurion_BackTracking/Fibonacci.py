# https://www.hackerrank.com/challenges/ctci-fibonacci-numbers/problem

def fibonacci(n):
    if n==0 or n==1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

n = int(raw_input())
print(fibonacci(n))
