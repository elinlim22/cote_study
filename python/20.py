# 문제번호 10039

n = 0
for _ in range(5):
    i = int(input())
    if i >= 40:
        n += i
    else: n += 40

print(n//5)
