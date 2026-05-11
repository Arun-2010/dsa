#include <bits/stdc++.h>
using namespace std;


class TrieNode{
    public:
    char value;
    TrieNode*children[26];
    bool isTerminal;
    
    TrieNode(char val){
        this->value=val;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
        
    }
};


//insertion
void insertword(TrieNode*root, string word){
    cout<<"recieved word:"<<word<<endl;
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    
    
    char ch=word[0];
    int index=ch-'a';
    TrieNode*child;
    if(root->children[index] != NULL){
        
        //present 
        child=root->children[index];
    }
    else{
        child=new TrieNode(ch);
        root->children[index]=child;
    }
    insertword(child,word.substr(1));
    
}


bool searchword(TrieNode*root,string word){
    if(word.length()==0){
        return root->isTerminal;
    }
    
    char ch=word[0];
    int index=ch-'a';
    TrieNode*child;
    
    if(root->children[index]!=NULL){
        //found
        child=root->children[index];
    }else{
        return false;
    }
    
    //recursion will slove
    bool recursionAns=searchword(child,word.substr(1));
    return recursionAns;
    
}



void deleteword(TrieNode*root,string word){
    if(word.length()==0){
        root->isTerminal=false;
        return;
    }
    char ch=word[0];
    int index=ch-'a';
    TrieNode*child;
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        return;
    }
    
    deleteword(child,word.substr(1));
}

int main() {
	// your code goes here
	TrieNode*root=new TrieNode('-');
	
	insertword(root,"donation");
	
	insertword(root,"time");
	
	
	
	
	if(searchword(root,"time")){
	    cout<<"found"<<endl;
	}
	else{
	    cout<<"not found"<<endl;
	}
	
	
	deleteword(root,"time");
	
	if(searchword(root,"time")){
	    cout<<"found"<<endl;
	}
	else{
	    cout<<"not found"<<endl;
	}
	
	
	

}

//output
recieved word:donation
recieved word:onation
recieved word:nation
recieved word:ation
recieved word:tion
recieved word:ion
recieved word:on
recieved word:n
recieved word:
recieved word:time
recieved word:ime
recieved word:me
recieved word:e
recieved word:
found
not found