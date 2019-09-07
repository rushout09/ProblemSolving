def factorial(x):
    fact = 1
    for i in range(2,x+1):
        fact = fact*i
    return fact

n = int(input())
while n:
    x = int(input())
    print(factorial(x))
    n = n-1