// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;


class Queue{
    public:
    int*arr;
    int size;
    int front;
    int rear;
    
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    
    
    
    void push(int val){
        //check full
        if(rear==size-1){
            cout<<"queue is overflow"<<endl;
            return;
        }else if(front==-1 && rear==-1){
            //empty case
            front++;
            rear++;
            arr[rear]=val;
            
        }else{
            rear++;
            arr[rear]=val;
        }
    }
    
    
    
    void pop(){
        //underflow
        
        if(front==-1&&rear==-1){
            cout<<"undeflow"<<endl;
            return;
        }else if(front==rear){
            //single element
            
            arr[front]=-1;
            front=-1;
            rear=-1;
        }else{
            arr[front]=-1;
            front++;
        }
    }
    
    
    
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }else{
            return false;
        }  
    }
    
    
    int getsize(){
        if(front==-1 && rear==-1){
            return 0;
        }else{
        return rear-front+1;
    }
    }
    
    
    int getfront(){
        if(front==-1){
            cout<<"no elemnet "<<endl;
            return -1;
        }else{
            return arr[front];
        }
    }
    
    
    int getrear(){
        if(isempty()){
            cout<<"no element"<<endl;
        }else{
            return arr[rear];
        }
}
    
    
    void print(){
        cout<<"printing queue : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main() {
   Queue q(5);
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
  
  
  cout<<"size of queue : "<<q.getsize()<<endl;
  
  
  q.pop();
  q.print();
  
  cout<<"size of queue : "<<q.getsize()<<endl;
  
  cout<<"queue is empty : "<<q.isempty()<<endl;
  
  cout<<"rear element :"<<q.getrear()<<endl;
  
  cout<<"front element :"<<q.getfront()<<endl;
  
}

/*
printing queue : 0 0 0 0 0 
printing queue : 10 0 0 0 0 
printing queue : 10 20 0 0 0 
printing queue : 10 20 30 0 0 
printing queue : 10 20 30 40 0 
printing queue : 10 20 30 40 50 
size of queue : 5
printing queue : -1 20 30 40 50 
size of queue : 4
queue is empty : 0
rear element :50
front element :20
*/