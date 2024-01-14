# 문제번호 1789

n = int(input())

output = 1
for i in range(1, n):
    n -= i
    if n <= i:
        break
    output += 1
print(output)

# 다른 코드
# print(int(((1+int(input())*8)**.5-1)/2))

# GPT 답변 : 등차수열의 합 공식을 사용하기
