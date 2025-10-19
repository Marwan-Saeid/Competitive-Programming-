#include<iostream>

using namespace std ;
int main()
{
int t ;
cin>> t;
    while(t--)
{
    int a, b , c , x ,y ;
   cin>>a>>b>>c>>x>>y;
   if(y<=b&&x<=a)
   {
    cout<<"YES"<<endl;
   }
   else if(c>=abs((x-a))+abs((y-b))&&x>a&&y>b)
   {
       cout<<"YES"<<endl;
   }
   else if(c>=(x-a)&&x>a&&b>=y)
   cout<<"YES"<<endl;
    else if(c>=(y-b)&&y>b&&x<=a)
   cout<<"YES"<<endl;
   
   else
    cout<<"NO"<<endl;
}

    return 0;
}