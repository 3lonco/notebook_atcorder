import sys


def input():
    return sys.stdin.readline()[:-1]


N = int(input())
a = list(map(int, input().split()))


def solve(a):

    cnt = 0
    flag = False
    for i in a:
        flag = False
        while flag == False:
            if i % 2 == 0:
                i = i / 2
                cnt += 1
            else:
                flag = True

    print(cnt)


solve(a)
