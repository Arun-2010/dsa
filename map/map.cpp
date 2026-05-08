#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_map<string,int>mapping;
	
	//insert
	
	pair<string,int>q("arun",24);
	
	
	
	mapping.insert(q);
	
	cout<<"size of map: "<<mapping.size()<<endl;
	
	//acess
	cout<<mapping.at("arun")<<endl;
	cout<<mapping["arun"]<<endl;
	
	//note using square brackets we can access the elment but if the element doesn't present then it will create an entry 
	
	
	
	
	//searching 
    cout<<mapping.count("arun")<<endl; // count return 1 if it exsists in the map or else return 0;
    
    
    
    //another way of searching
    
    if(mapping.find("arun")!=mapping.end()){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}


//output
size of map: 1
24
24
1
found