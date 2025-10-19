#include<bits/stdc++.h>
using namespace std ;
int main()
{
int n ,a=0,b=0,c=0,d=0,counter=0;
cin >> n;
int arr[n];
for(int i=0 ;i<n;i++)
{
    cin >> arr[i];
    if(arr[i]==1)
        a++;
    if(arr[i]==2)
        b++;
        if(arr[i]==3)
        c++;
        if(arr[i]==4)
        d++;
}
counter+=d;
while(true)
{
    if(c!=0&&a!=0)
    {
        counter++;
        c--;
        a--;
        continue;
    }
   if(c!=0)
    {
        counter++;
        c--;
        continue;
    }
    if(b>=2)
    {
        counter++;
        b-=2;
        continue;
    }
    if(b!=0&&a>=2)
    {
        counter++;
        b--;
        a-=2;
        continue;
    }
     if(b!=0&&a!=0)
    {
        counter++;
        b--;
        a--;
        continue;
    }
     if(b!=0)
    {
        counter++ ;
        b--;
        continue;
    }
    if(a!=0)
    {
       if (a>= 4)
       {counter++;
           a-=4;
       }
       else
       {
        counter++;
           break;
       }
    }
    if(a==0&&b==0&&c==0)
    break;

}

cout<<counter<<endl;
}