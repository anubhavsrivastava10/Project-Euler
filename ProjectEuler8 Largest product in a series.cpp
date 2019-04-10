#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n,i,prod;
        int k,max=0;
        cin >> n >> k;
        string num;
        cin >> num;
         for(int i = 0; i <= n-k; i++){
            for(int j = i; j < k+i; j++){
                prod *= num[j] - '0';
            }
            if(max < prod)
                max = prod;
            prod = 1;
        }
        cout<<max<<endl;

    }
return 0;
}
