#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main(){

    int a[]={1,4,2};

    // array<int,4> c={1,2,3,4};
    // vector<int> v;
    // vector<int> last(5,1);

    // vector<int> b(last);
    // for(int i:last){
    //     cout<<i<<" ";
    // }cout<<endl;

    // cout<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // cout<<v.capacity()<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<c.empty()<<endl;
    // cout<<c.front()<<endl;

   // deque<int> d;

    // d.push_back(2);
    // d.push_front(3);

    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // //d.pop_back();

    // cout<<"print first element at "<<d.at(0)<<endl;
    // cout<<d.front()<<endl;
    // cout<<d.size()<<endl;
    // cout<<d.empty()<<endl;
    // d.erase(d.begin(),d.begin()+1 );

    // list<int> l;

    // list<int> n(5,100);

    // l.push_back(3);
    // l.push_front(1);

    // for(int i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // l.erase(l.begin());
    // for(int i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // stack<string> s;

    // s.push("hey");
    // s.push("what");
    // s.push("up");

    // cout<<s.top()<<endl;

    // queue<string> q;

    // q.push("hey");
    // q.push("whats");
    // q.push("up");

    // cout<<q.front()<<endl; 

    //MAX HEAP
    // priority_queue<int> maxi;
    
    // //MIN HEAP
    // priority_queue<int,vector<int>,greater<int>> mini;

    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);
    // maxi.push(1);
    // maxi.push(6);

    // int n = maxi.size();

    // for(int i=0;i<n;i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }
    // cout<<endl;

    // mini.push(1);
    // mini.push(0);
    // mini.push(3);
    // mini.push(4);
    // mini.push(2);

    // int m = mini.size();
    // for(int i=0;i<m;i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }
    // cout<<endl;

    // set<int> s;

    // s.insert(4);
    // s.insert(2);
    // s.insert(3);
    // s.insert(6);
    // s.insert(1);

    // for(int i:s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // s.erase(s.begin());

    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;




    return 0;
}