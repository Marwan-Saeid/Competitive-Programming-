#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ;
    cin>>test;
    while(test--){
      int n ;cin>>n;
      map<string , int > person1, person2, person3;
      set<string> allword;
      int arr[3]={};
      for(int i=0 ;i<n;i++){
        string word ;cin>>word;
        allword.insert(word);
        person1[word]=1;
      }
      for(int i=0 ;i<n;i++){
        string word ;cin>>word;
        allword.insert(word);
        person2[word]=1;
      }
      for(int i=0 ;i<n;i++){
        string word ;cin>>word;
        allword.insert(word);
        person3[word]=1;
      }
      for(string word: allword){
        person1[word]++;
        person2[word]++;
        person3[word]++;
        if(person1[word]==2 && person2[word]==2 && person3[word]==2)
        continue;
        else if(person1[word]==2 && person2[word]==2){
        arr[0]++;
        arr[1]++;
        }
        else if(person1[word]==2 && person3[word]==2){
        arr[0]++;
        arr[2]++;
        }
        else if(person2[word]==2 && person3[word]==2){
          arr[1]++;
          arr[2]++;
        }
        else if(person1[word]==2)
        arr[0]+=3;
        else if(person2[word]==2)
        arr[1]+=3;
        else if(person3[word]==2)
        arr[2]+=3;
      }
      cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
    return 0;
}