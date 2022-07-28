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

bool isPossible(int a[], int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+a[i]<=mid){
            pageSum+=a[i];
        }
        else{
            studentCount++;
            if(studentCount>m || a[i]>mid){
                return false;
            }
            pageSum=0;
            pageSum+=a[i];
        }
    }
        return true;
}

int allocateBooks(int a[], int n, int m){
    int s=0;
    int sum =0;
    for(int i=0; i<=n;i++){
        sum+=a[i];
    }
    int e=sum;
    int ans=-1;
    int mid= s+ (e-s)/2;
    while(s<=e){
        if(isPossible(a,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

bool isPaint(int a[], int n, int k ,int mid){
    int paintMen= 1;
    int paintColor=0;
    for(int i=0;i<n;i++){
        if(paintColor + a[i] <=mid){
            paintColor+=a[i];
        }
        else{
            paintMen++;
            if(paintMen >k || a[i]>mid){
                return false;
            }
            paintColor=0;
            paintColor+=a[i];
        }
    }
        return true;

}

int painterAllotment(int a[], int n, int k){
    int s=0;
    int sum=0;
    for(int i=0; i<=n;i++){
        sum+=a[i];
    }
    int e= sum;
    int ans=-1;
    int mid=s+ (e-s)/2;
    while(s<=e){
        if(isPaint(a,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

bool isCow(int a[], int n , int k ,int mid){
    int cowCount=1;
    int cowDist=a[0];
    for(int i=0;i<n;i++){
        if(a[i]-cowDist>=mid){
            cowCount++; 
            if(cowCount<=k){
                return true;
            }
            cowDist=a[i];
        }
    }
    return false;
}

int aggressiveCows(int a[], int n , int k){

    //sort the array or vector
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<e){
        if(isCow(a,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int a[] = {5,5,5,5};
    int n = sizeof(a)/sizeof(a[0]);
    int m =2;
    int key= 2;
    int k=2;

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

    // int root = squareRoot(k);
    // // cout<<root<<endl;
    // cout<<morePrecision(k,3,root)<<endl;

    // int books= allocateBooks(a,n,m);
    // cout<<books<<endl;

    int paint=painterAllotment(a,n,k);
    cout<<paint<<endl;

    return 0;
}