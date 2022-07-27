#include <iostream>
using namespace std;

int binarySearch(int a[], int n ,int start, int end, int key){
    int mid= start + (end - start)/2;

    while(start<=end){

        if(a[mid] == key){
            return mid;
        }
        if(a[mid]<key){
            start = mid + 1;
        }
        else{
            end= mid -1;
        }

        mid = start + (end -start)/2;
    }
    return -1;
}

int firstOccur(int a[], int n , int key){
    int start=0;
    int end=n-1;
    int mid= start + (end - start)/2;
    int ans=-1;

    while(start<=end){

        if(a[mid] == key){
            ans= mid;
            end=mid-1;
        }
        else if(a[mid]<key){
            start = mid + 1;
        }
        else{
            end= mid -1;
        }

        mid = start + (end -start)/2;
    }
    return ans;
}

int lastOccur(int a[], int n , int key){
    int start=0;
    int end=n-1;
    int mid= start + (end - start)/2;
    int ans=-1;

    while(start<=end){

        if(a[mid] == key){
            ans= mid;
            start=mid+1;
        }
        else if(a[mid]<key){
            start = mid + 1;
        }
        else{
            end= mid -1;
        }

        mid = start + (end -start)/2;
    }
    return ans;
}

int PeakIndex(int a[], int n){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(a[mid] < a[mid+1]){
            s=mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int getPivot(int a[], int n,int s,int e){
    int mid = s + (e-s)/2;

    while(s<e){
        if(a[mid]>=a[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int squareRoot(int k){
    int s=0,e=k-1;
    int mid= s+ (e-s)/2;
    int ans=-1;

    while(s<=e){
        if((mid*mid)== k){
            return mid;
        }
        if((mid*mid)<k ){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int k,int precision, int root){
    double factor=1;
    double ans= root;
    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j= ans; j*j<k; j=j+factor){
            ans =j;
        }
    }
    return ans;
}

int main(){
    int a[] = {7,9,1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int key= 2;
    int k=37;

    //int index= binarySearch(a,n,key);
    //cout<<"index is "<<index<<endl;

    // pair<int ,int>p;
    // p.first= firstOccur(a,n,key);
    // p.second = lastOccur(a,n,key);
    //int peak = PeakIndex(a,n);
    //cout<<peak<<endl;

    //  int pivot = getPivot(a,n,0,n-1);
    // if(key>= a[pivot] && key<= a[n-1]){
    //     cout<< binarySearch(a,n,pivot,n-1,key);
    // }
    // else{
    //     cout<< binarySearch(a,n,0,pivot,key);
    // }

    int root = squareRoot(k);
    // cout<<root<<endl;
    cout<<morePrecision(k,3,root)<<endl;

    return 0;
}