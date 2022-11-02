import sys


def input():
    return sys.stdin.readline()[:-1]


N = int(input())
L = []
R = []
L.append(0)
R.append(0)

for i in range(N):
    tl, tr = map(int, input().split())
    L.append(tl)
    R.append(tr)


CurrentTime = 0
Answer = 0
flag = False
while flag == False:
    Min_EndTime = 999999
    for i in range(1, N + 1, 1):
        if L[i] < CurrentTime:
            continue
        Min_EndTime = min(Min_EndTime, R[i])

    if Min_EndTime == 999999:
        break
    CurrentTime = Min_EndTime
    Answer += 1

print(Answer)
