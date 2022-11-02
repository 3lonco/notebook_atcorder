import sys


def input():
    return sys.stdin.readline()[:-1]


N, D = map(int, input().split())

f = [False] * 200000


job = []
for i in range(N):
    x, y = map(int, input().split())
    job.append([x, y])

# 終了でソート
job.sort(key=lambda x: x[1], reverse=True)

currentDay = 1
ans = 0
flag = True
while flag == True:
    v = 0
    job_num = -1
    for i in range(0, N, 1):
        if f[i] == False and job[i][0] <= currentDay:
            v = job[i][1]
            job_num = i
            break

    if job_num != -1:
        ans += v
        f[job_num] = True
    currentDay += 1

    if currentDay > D:
        flag = False

print(ans)
