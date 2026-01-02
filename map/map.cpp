// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<unordered_map>

int main() {
   //creation
   unordered_map<string,int>mapping;
   
   //insertion
   pair<string,int>p("arun",21);
   mapping.insert(p);
   
   cout<<"size of map:"<<mapping.size()<<endl;
   cout<<"value:"<<mapping.at("arun")<<endl;
   
   //searching if present 1 else 0
   cout<<mapping.count("arun")<<endl;
   cout<<mapping.count("a")<<endl;
   //better way for searching
   if(mapping.find("arun")!=mapping.end()){
       cout<<"found";
   }
   else{
       cout<<"not found";
   }
   }
   
//output:
 size of map:1
value:21
1
0
found
