capacities=[14,35,86,58,25,62]
bottoles=  [6 ,34,27,38, 9,60]
fromId=[1,2,4,5,3,3,1,0]
toId=  [0,1,2,4,2,5,3,1]

M=8
for i in range(M):
    print(bottoles)
    temp=bottoles[fromId[i]]

    if temp+bottoles[toId[i]] <=capacities[toId[i]]:
        bottoles[toId[i]] +=temp
        bottoles[fromId[i]]=0

    elif temp+bottoles[toId[i]] >capacities[toId[i]]:
        amt=capacities[toId[i]] - bottoles[toId[i]]
        bottoles[fromId[i]] -= amt
        bottoles[toId[i]]=capacities[toId[i]]




print(bottoles[:])