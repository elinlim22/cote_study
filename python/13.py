# 문제번호 2675

T = int(input())

for _ in range(T):
    s = list(map(str, input().split()))
    t = int(s[0])
    for i in range(len(s[1])):
        print(s[1][i] * t, end='')
    print()
