import sys


def input():
    return sys.stdin.readline()[:-1]


N = int(input())
LR = []
L = []
R = []
L.append(0)
R.append(0)

for i in range(N):
    tl, tr = map(int, input().split())
    LR.append([tl, tr])

# 終了でソート
LR.sort(key=lambda x: x[1])

for i in range(N):
    L.append(LR[i][0])
    R.append(LR[i][1])


CurrentTime = 0
Answer = 0

for i in range(1, N + 1, 1):
    if CurrentTime <= L[i]:
        CurrentTime = R[i]
        Answer += 1

print(Answer)
