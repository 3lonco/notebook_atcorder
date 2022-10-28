s = "12345"
if len(s) % 2 != 0:
    r = len(s)
else:
    r = len(s) - 1


a = ""
for i in range(r):
    if s[i] != s[(len(s) - 1) - i]:
        print(s[i])
        a = s[i] + a

print(s + a)
