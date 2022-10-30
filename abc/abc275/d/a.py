import math
from collections import defaultdict

# num:文字列sが何個あるか。
num = defaultdict(int)


N = int(input())

ans = 0


def f(n):

    k1 = n / 3
    k2 = n / 2

    k1 = math.floor(k1)
    k2 = math.floor(k2)

    sk1 = str(k1)
    sk2 = str(k2)

    if num[sk1] != 0:
        print("left", sk1, sk2)
        left = num[sk1]
    else:
        left = f(k1)

    if num[sk2] != 0:
        print(sk1, sk2)
        right = num[sk2]
    else:
        right = f(k2)

    return left + right


num["0"] = 1

if N == 0:
    print(1)
else:
    ans = f(N)
    print(ans)
