#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // int a= 4;
    // int b=6;

    // cout<<(a&b)<<endl;
    // cout<<(~b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;

    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;


    //int n=234;
    // int a=0;
    // int b=1;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=a+b;
    //     a=b;
    //     b=sum;

    //     cout<<sum<<",";
    // }
    // cout<<endl;

    // int digit=0;
    // int sum=0,product=1;
    // for(int i=0;i<=n;i++){
    //     digit=n%10;
    //     n=n/10;
    //     sum+=digit;
    //     product*=digit;
    // }
    // cout<<product-sum<<endl;

    // int n=-234;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans = (bit* pow(10,i))+ans;
    //     n=n>>1;
    //     i++;

    // }
    // cout<<ans<<endl;

    // int n=-743687;
    // int ans=0;
    // while(n!=0){
    //     int digit=n%10;
    //     ans = ans*10+digit; 
    //     n=n/10;
    // }

    // cout<<ans<<endl;

    // int n=5;
    // int m =n;
    // int mask=0;
    // if(n==0){
    //     cout<<0;
    // }
    // while(m!=0){
    //     mask = (mask<<1) | 1;
    //     m=m>>1;
    // }
    // int ans = (~n) & mask;
    // cout<<ans;

    // int n=14;

    // for(int x=0; x<=30;x++){
    //     int power= pow(2,x );
    //     if(power == n){
    //         cout<<"true";
    //         break;
    //     }
    // }

    int n=5;
    while(1){
        switch (n)
        {
        case 1:
            cout<<n;
        default:
            
          exit(0);
        }
    }

    return 0;
}