# 문제번호 5355

a = int(input())

for _ in range(a):
    lst = list(map(str, input().split()))
    n = float(lst[0])
    i = 1
    for i in range(len(lst)):
        if lst[i] == "@":
            n *= 3
        elif lst[i] == "%":
            n += 5
        elif lst[i] == "#":
            n -= 7
    print("{:.2f}".format(n))
