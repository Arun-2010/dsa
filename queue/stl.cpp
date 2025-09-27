// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

int main() {
   queue<int>qu;
   
   qu.push(10);
   qu.push(20);
   qu.push(30);
   qu.push(40);
   
   
   cout<<"top element "<<qu.front()<<endl;
   cout<<"size of queue:"<<qu.size();
   qu.pop();
   cout<<" \ntop element "<<qu.front()<<endl;
   cout<<"size of queue:"<<qu.size();
   cout<<"back element:"<<qu.back();
   
}


/*
top element 10
size of queue:4 
top element 20
size of queue:3
back element:40

=== Code Execution Successful ===