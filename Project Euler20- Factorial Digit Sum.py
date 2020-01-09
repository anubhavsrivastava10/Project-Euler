def factorial(n): 
    return 1 if (n==1 or n==0) else n * factorial(n - 1); 

for i in range(0,int(input())):
    num = int(input())
    x= factorial(num)
    print(sum(map(int,str(x))))
