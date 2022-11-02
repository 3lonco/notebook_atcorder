N, M = map(int, input().split())
A = list(map(int, input().split()))


X = [0] * (N + 1)

for i in A:
    X[i] += 1

for i in range(1, N + 1, 1):
    print(M - X[i])
