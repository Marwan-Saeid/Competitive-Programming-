#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    while(~scanf("%d", &t)){
        stack<int>st;
        queue<int>q;
        priority_queue<int>qe;

        bool is_q=1,is_st=1,is_qe=1;

        for(int i=0;i<t;i++){
        int x,y;cin>>x>>y;
        if(x==1){
        st.push(y);
        q.push(y);
        qe.push(y);
        }
        else{
            if(!st.empty() && st.top()==y)st.pop();
                else is_st=0;
            
            if(!q.empty() && q.front()==y) q.pop();
                else is_q=false;
            
            if(!qe.empty()&& qe.top()==y) qe.pop();
              
                else is_qe=false;
               
            }
        }
        if( !is_st && !is_q && !is_qe )
        cout<<"impossible"<<endl;
        else if((is_st&&is_q)|| (is_st&&is_qe)||(is_q&&is_qe))
        cout<<"not sure"<<endl;
        else if(is_st)
        cout<<"stack"<<endl;
        else if(is_q)
        cout<<"queue"<<endl;
        else if(is_qe)
        cout<<"priority queue"<<endl;
    }
    return 0;
}