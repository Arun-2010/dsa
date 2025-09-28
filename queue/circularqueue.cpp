// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

class cqueue{
  public:
  int*arr;
  int size;
  int front;
  int rear;
  
  cqueue(int size){
      arr=new int[size];
      this->size=size;
      front=-1;
      rear=-1;
  }
  
  
  void push(int val){
      //overflow
      //empty case
      //circular nature
      //normal flow
      if((front==0 && rear==size-1 )||rear==front-1){
          cout<<"overflow"<<endl;
      }else if(front==-1 && rear==-1){
          front++;
          rear++;
          arr[rear]=val;
      }else if(rear==size-1&&front!=0){
          rear=0; 
          arr[rear]=val;
      }else{
          rear++;
          arr[rear]=val;
      }
  }
  
  void pop(){
      if(front==-1 && rear==-1){
          cout<<"underflow"<<endl;
      }else if(front==rear){
          arr[front]=-1;
          front=-1;
          rear=-1;
      }
      else if(front==size-1){
          arr[front]=-1;
          front=0;
      }
      else{
          arr[front]=-1;
          front++;
      }
  }
  
  void print(){
     // cout<<"front :" <<front<<"rear:"<<rear<<endl;
      cout<<"printing queue:";
      for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  }
  
  
};
int main() {
    // Write C++ code here
    cqueue q(5);
    q.print();
    
    q.push(10);
    q.print();
    
    
    q.push(20);
    q.print();
    
    
    q.push(30);
    q.print();
    
    
    q.push(40);
    q.print();
    
    q.push(50);
    q.print();
    
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();

   
     
}

printing queue:0 0 0 0 0 
printing queue:10 0 0 0 0 
printing queue:10 20 0 0 0 
printing queue:10 20 30 0 0 
printing queue:10 20 30 40 0 
printing queue:10 20 30 40 50 
printing queue:-1 -1 -1 -1 -1 


=== Code Execution Successful ===