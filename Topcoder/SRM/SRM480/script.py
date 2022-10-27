#numbers=[1000,999,998,997,996,995]
numbers=[1,3,2,1,1,3]

l=sorted(numbers)


ans=l[0]+1

for i in range(1,len(l),1):
    ans*=l[i]


print(ans)