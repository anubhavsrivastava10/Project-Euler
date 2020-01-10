def fibonacci(n):
    n1, n2, x = 1, 2, 0
    lst=[]
    while n1 < n:
        lst.append(n1)
        nth = n1 + n2
        n1 = n2
        n2 = nth
    for i in lst:
        if(i%2==0):
            x=x+i
    print(x)
    
for i in range(0,int(input())):
    fibonacci(int(input()))
