N, K = map(int, input().split())
A = [0]
B = [0]
for i in range(1, N + 1):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

ans = 0
for a in range(1, 101):
    for b in range(1, 101):
        cnt = 0
        for i in range(1, N + 1, 1):
            if a <= A[i] and A[i] <= a + K:
                if b <= B[i] and B[i] <= b + K:
                    cnt += 1
        ans = max(ans, cnt)

print(ans)
