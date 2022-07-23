#include <iostream>
using namespace std;

void maxArray(int a[], int n){
    int maxnum= -1999999;
    for(int i=0;i<n;i++){
        if(a[i]>maxnum){
            maxnum=a[i];
        }
    }
    cout<<maxnum<<endl;
}

void sumArray(int a[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}

//LINEAR SEARCH
bool linearSearch(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return 1;
        }
    }  
            return 0;
}

void reverseArray( int a[], int n){
    int temp;
    int start=0;
    int end=n-1;
    while(start<=end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

void alternateSwap(int a[], int n){
    int temp;
    for(int i=0;i<n;i+=2){
        if(a[i+1]<=n){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

void uniqueArray(int a[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    cout<<ans<<endl;
}

bool uniqueOccurences(int a[], int n){
    int count[2001]={0};

    for(int i=0;i<n;i++){
        count[a[i]+1000]+=1;
    }
    int m=0;
    for(int i=0;i<2001;i++){
        if(count[i]>m){
            m=count[i];
        }
    }

    int count2[2001]={0};
    for(int i=0;i<2001;i++){
        count2[count[i]]+=1;
    }

    for(int i=1;i<=m;i++){
        if(count2[i]>1){
            return 0;
        }
    return 1;
    }
};


void duplicates(int a[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }

    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    cout<< ans<<endl;
}


void intersectionArray(int a[], int b[], int n , int v){
    int ans=0;
    int i=0,j=0;
    while(i<n && j<v){
        if(a[i]==b[j]){
            cout<<a[i];
            i++;
            j++;
        }
        else if (a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }

}

void tripletSum(int a[], int n){
    int i=0;
    while(i<n-2){
        int j=i+1,k=i+2;
        if(a[i]+a[j]+a[k]==10){
            for(int c=i;c<=k;c++){
                cout<<a[c]<<" ";
            }cout<<endl;
        }
        i++;
    }
}

// void sortBinary(int a, int n){
//     int i=0,j=n-1;
//     while(i<j){
//         while(a[i]==0){
//             i++;
//         }
//         while(a[j]==1){
//             j--;
//         }

//     }
// }

int main(){

    int a[]={1,2,5,3,4,3};
    int b[]={2,2,3,3};
    int v = sizeof(b)/sizeof(b[0]);
    int n = sizeof(a)/sizeof(a[0]);
    int key = 5;

    //maxArray(a,n);
    //sumArray(a,n);

    // bool found=linearSearch(a,n,key);
    // if(found){
    //     cout<<"present"<<endl;
    // }
    // else{
    //     cout<<"not present"<<endl;
    // }

    //reverseArray(a,n);
    //alternateSwap(a,n);
    //uniqueArray(a,n);
    // bool UC = uniqueOccurences(a,n);
    // if(UC){
    //     cout<<" there"<<endl;
    // }
    // else{
    //     cout<<"not there"<<endl;
    // }

    //duplicates(a,n);
    //intersectionArray(a,b,n,v);
    tripletSum(a,n);

    return 0;
}