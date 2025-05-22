def sol(n):
    if n == 0:
        print("-", end="")
        return

    sol(n - 1)
    print(" " * (3 ** (n - 1)), end="")
    sol(n - 1)

try:
    while True:
        n = int(input())
        sol(n)
        print()
except EOFError:
    pass
