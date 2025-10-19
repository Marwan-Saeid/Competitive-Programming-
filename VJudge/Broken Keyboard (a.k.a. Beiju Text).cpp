#include<iostream>
#include<string>
#include <deque>
using namespace std ;
int main(){

    string s;
    while(cin>>s){
        deque<string>dq;
        string w="";
          bool flag=0;
    for(char ch:s){
        
        if(ch=='['){
            if(flag)
            dq.push_front(w);
            else 
            dq.push_back(w);
            w="";
            flag=1;
        }
        else if(ch==']'){
            if(flag)
            dq.push_front(w);
            else 
            dq.push_back(w);
            w="";
            flag=0;
        }
        else{
            w+=ch;
        }
    }
                if(flag)
            dq.push_front(w);
            else 
            dq.push_back(w);
        for(string ss:dq)
    cout<<ss;
    cout<<endl;
    }
}