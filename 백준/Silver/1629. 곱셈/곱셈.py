import sys

# 분할정복
def solve(a, b, c):
    if b == 1:
        return a % c
 
    if b % 2 == 0:
        tmp = solve(a, b/2, c)
        return (tmp * tmp) % c
 
    else:
        tmp = solve(a, (b-1)/2, c)
        return (tmp * tmp * a) % c

a,b,c = map(int,sys.stdin.readline().split()) 
print(solve(a,b,c))