# 문제번호 2530

h, m, s = map(int, input().split())
D = int(input())

s += D

def adder(low, up):
    if low > 59:
        up += low // 60
        low %= 60
    return low, up

s, m = adder(s, m)
m, h = adder(m, h)
h %= 24

print(f'{h} {m} {s}')
