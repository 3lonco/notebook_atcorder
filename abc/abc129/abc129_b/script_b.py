N=int(input())

W=list(map(int,input().split()))


S=[0]*N
S[0]=W[0]

Tone=0
Ttwo=0
for i in range(1,N):
    S[i] =S[i-1]+W[i]

ans=1000000000
for i in range(N):
    Tone=S[i]
    Ttwo=S[N-1]-S[i]
    temp=abs(Tone-Ttwo)
    ans=min(ans,temp)


print(ans)
