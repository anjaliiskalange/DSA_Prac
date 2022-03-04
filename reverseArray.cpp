#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // int a[3]={3,5,4};
    int i=0;
    int j=n-1;
    int temp;
    while(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (int i=0; i<n;i++){
        cout<<a[i];
    }

    return 0;
}