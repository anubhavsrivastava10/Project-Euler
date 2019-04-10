#include<iostream>
using namespace std;

int main()
{
    long long int y,j,i,p,sum=0,N;
    cin>>y;
    for(j=0;j<y;j++)
    {
            cin>>N;
            sum = 0;
            p = (N-1)/3;
            sum = ((3*p*(p+1))/2);

            p = (N-1)/5;
            sum = sum + ((5*p*(p+1))/2);

            p = (N-1)/15;
            sum = sum - ((15*p*(p+1))/2);
            cout<<sum<<endl;
    }
return 0;
}
