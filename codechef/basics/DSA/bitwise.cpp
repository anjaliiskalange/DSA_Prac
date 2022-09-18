#include <iostream>
#include <math.h>
using namespace std;

int findroots(int a,int b, int c){
    int d=b*b - 4*a*c;
    double squareVal=sqrt(abs(d));
    if(d>0){
        cout<<" real roots"<<endl;
        cout<<(double)(-b + squareVal)/(2*a)<<endl
            <<(double)(-b+squareVal)/(2*a);
    }
    else if(d==0){
        cout<<"real and same"<<endl;
        cout<<-(double)b/(2*a)<<endl;
    }
    else{
        cout<<"imaginary roots"<<endl;
        cout<<-(double)b/(2*a)<<"+ i"<<squareVal/(2* a)<<endl
        <<-(double)b/(2*a)<<"- i"<<squareVal/(2* a)<<endl;
    }
}

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

    // int n=5;
    // while(1){
    //     switch (n)
    //     {
    //     case 1:
    //         cout<<n;
    //     default:
            
    //       exit(0);
    //     }
    // }

    // int n=17;
    // int binumb[32];
    // int i=0;
    // while(n>0){
    //     binumb[i]=n%2;
    //     n=n/2;
    //     i++;
    // }
//FIBONACCI
    // for(int j=i-1;j>=0;j--){
    //     cout<<binumb[j];
    // }
    // int a=0;
    // int b=1;
    // int n=5;
    // int i,j,c;
    // cout<<b<<" "<<endl;
    // for(i=1;i<n;i++){
    //     for( j=0;j<=i;j++){
    //         c=a+b;
    //         cout<<c<<"\t";
    //         a=b;
    //         b=c;
    //     }
    //     cout<<endl;
    // }

    //PRIME OR NOT
    // int n=29;
    // bool prime=true;
    // if(n==0 || n==1){
    //     prime=false;
    // }
    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0){
    //         prime=false;
    //         break;
    //     }
    // }

    // if(prime){
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }

    //PRINT PRIME NUMBER
    // int n=1;
    // int m=100;
    // int ctr;
    // for(int i=2;i<=m;i++){
    //     int ctr=0;
    //     for(int j=2;j<=sqrt(i);j++){
    //         if(i%j==0){
    //             ctr=1;
    //         }
    //     }
    //     if(ctr==0){
    //         cout<<i<<" ";
    //     }
    // }

    //DECIMAL TO BINARY CONVERSION
    // int n=7;
    // int binum[32];
    // int i=0;
    // while(n!=0){
    //     binum[i]=n%2;
    //     n=n/2;
    //     i++;
    // }

    // for(int j=i-1;j>=0;j--){
    //     cout<<binum[j];
    // }

    //BINARY TO DECIMAL
//     int n=1010;
//     int temp=n;
//     int dec_value=0;
//     int base=1;
//     while(temp){
//         int last_digit = temp%10;
//         temp=temp/10;
//         dec_value=last_digit*base;
//         base=base*2;
//     }
//     cout<<dec_value;

    //ROOTS OF AN EQUATION
    int a=1,b=2,c=1;
    int m= findroots(a,b,c);
    return m;

    return 0;
 }