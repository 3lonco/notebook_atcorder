amari = 998244353

A, B, C, D, E, F = map(int, input().split())

ans = A * B * C - D * E * F

ans2 = ans % amari


print(ans2)
