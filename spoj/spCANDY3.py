t = int(input())
for i in range(0,t):
    input()
    sum=0
    n = int(input())
    for _ in range(0,n):
        sum=sum+int(input())
    if sum%n==0:
        print("YES")
    else:
        print('NO')