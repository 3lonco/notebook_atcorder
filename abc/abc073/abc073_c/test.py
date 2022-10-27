# https://atcoder.jp/contests/abc073/tasks/abc073_c


N=int(input())

from collections import defaultdict

#num:文字列sが何個あるか。
num = defaultdict(int)


for i in range(N):
    a = input()
    num[a] +=1

cnt=0
for i in num:
    if num[i] %2!=0:
        cnt+=1

print(cnt)
        