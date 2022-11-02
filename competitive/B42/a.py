N = int(input())
A = [0]
B = [0]


for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)


pm = 0
pp = 0
mm = 0
mp = 0
for i in range(1, N + 1):
    a = A[i]
    b = B[i]

    if a < 0 and b < 0:
        mm += abs(a) + abs(b)

        ### -4 3
    if a < 0 and b > 0:
        if abs(a) > abs(b):
            mm += abs(a + b)
        ##3 -4
    if a > 0 and b < 0:
        if abs(a) < abs(b):
            mm += abs(a + b)

    if a > 0 and b > 0:
        pp += a + b
        ## -2 3
    if a < 0 and b > 0:
        if abs(a) < abs(b):
            pp += abs(a + b)
    ### 2 -1
    if a > 0 and b < 0:
        if abs(a) > abs(b):
            pp += abs(a + b)

    ### mp
    if a < 0 and b > 0:
        mp += abs(a) + abs(b)
    ###mp ++
    ###ex 3 5
    if a > 0 and b > 0:
        ### 3 < 5
        if abs(a) < abs(b):
            ### 3-5 = |-2|
            ###mp +=2
            mp + abs(a - b)
    ### mp --
    if a < 0 and b < 0:
        ## -3 -2
        if abs(a) > abs(b):
            ## -3 - -2 =|1|
            ## MP+=1
            mp += abs(a - b)

    ## pm 3 -2
    if a > 0 and b < 0:
        pm += abs(a) + abs(b)
    ###pm ++
    if a > 0 and b > 0:
        ## 3 2
        if abs(a) > abs(b):
            ## 3 -2
            pm += abs(a - b)
    ### mp --
    if a < 0 and b < 0:
        ## -3 -4
        if abs(a) < abs(b):
            ### -3 - -4 =1
            pm += abs(a - b)

print(max(pm, mm, pp, mp))
