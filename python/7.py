# 문제번호 11022

T = int(input())

# while i <= T:
#     A, B = map(int, input().split())
#     print(f'Case #{i}: {A} + {B} = {A + B}')
#     i += 1

# 다른 풀이
for i in range(T):
    A, B = map(int, input().split())
    print(f'Case #{i + 1}: {A} + {B} = {A + B}')
