
#N=8
#W=[27 ,23 ,76 ,2 ,3 ,5 ,62 ,52]
N=4
W=[1,3,1,1]

S=[0]*N
S[0]=W[0]

Tone=0
Ttwo=0
for i in range(1,N):
    S[i] =S[i-1]+W[i]

ans=1000000000
print(S[:])
for i in range(N):
    Tone=S[i]
    Ttwo=S[N-1]-S[i]
    print(Tone,Ttwo)
    temp=abs(Tone-Ttwo)
    ans=min(ans,temp)


print(ans)
