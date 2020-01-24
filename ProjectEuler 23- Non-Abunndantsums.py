def abundant(n):
    n1=int(n**(1/2))+1
    tot=0
    for i in range(2,n1):
        if(n%i==0): 
            if(i!=n/i):
                tot+=i+(n/i)
            else:
                tot+=i
    if(n<tot+1):
        return(True)
    else:
        return(False)


num=int(input())
for i in range(num):
    n=int(input())
    mid=int(n/2)
    flag=0
    for i in range(2,mid+1):
        if(abundant(i) and abundant(n-i)):
            print("YES")
            flag=1
            break
    if(flag==0):
        print("NO")
