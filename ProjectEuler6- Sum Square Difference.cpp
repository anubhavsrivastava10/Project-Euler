#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n],i;
    n>0;
    while(n--)
    {
        long long int sum=0,x=0,y=0,z=0,result=0,f;
        cin>>a[i];
        f=a[i];
        for(i=1;i<=f;i++)
        {
            sum += i;
            y=i*i;
            z+=y;
        }
        x=sum*sum;
        result=x-z;
        cout<<result<<endl;
    }
return 0;
}
