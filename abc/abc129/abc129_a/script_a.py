import itertools
P,Q,R=map(int,input().split())
a=[]
a.append(P)
a.append(Q)
a.append(R)

ans=100000000000000
nums = [0, 1, 2]
for balls in itertools.permutations(nums, 2):
    tmp=0
    for s in balls:
        tmp+=a[s]
    ans=min(ans,tmp)

print(ans)