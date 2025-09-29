//double queue list;
#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(60);
    dq.push_back(80);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size();
}

 /*
10
30
3

 */