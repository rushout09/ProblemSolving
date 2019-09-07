n = int(input())
while True:
    if n is 1 or n is 0:
        print(n)
    else:
        print((2*n)-2)
    try:
        n = int(input())
    except:
        break