# 문제번호 1934

def gcd(a, b):
    if a % b == 0: return b
    else: return gcd(b, a%b)

for _ in range(int(input())):
    a, b = map(int, input().split())
    if a > b: a, b = b, a
    print(a*b//gcd(b, a))

# 유클리드 호제법을 이용한 최대공약수 구하기
# 최대공약수를 구해서 a*b를 최대공약수로 나누면 최소공배수가 나온다.

