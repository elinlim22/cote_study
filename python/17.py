# 문제번호 11653

n = int(input())

i = 2
while i <= n:
    while n % i == 0:
        n //= i
        print(i)
    i += 1

# 다른 코드
# n=int(input())
# for i in range(2,int(n**(0.5))+2):
#     while n%i==0:print(i);n//=i
# if n!=1:print(n)
