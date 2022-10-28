first = ["fishing", "gardening", "swimming", "fishing"]
second = ["hunting", "fishing", "fishing", "biting"]


from collections import defaultdict

num = defaultdict(int)

for i, j in zip(first, second):
    num[i] += 1
    num[j] += 1


ans = 0
for i in num:
    temp = num[i]
    ans = max(ans, temp)
print(ans)
