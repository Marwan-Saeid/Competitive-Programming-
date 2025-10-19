#include <iostream>
#include<string>
using namespace std;
int counter=0;
string s;
void  f(int num){
		if(num==s.size()) return ;	if(s[num]=='a'||s[num]=='e'||s[num]=='u'||s[num]=='i'||s[num]=='o'||s[num]=='A'||s[num]=='E'||s[num]=='U'||s[num]=='I'||s[num]=='O')
		counter++;
		f(num+1);
		}
		int main()
		{
			getline(cin,s);
			f(0);
		cout<<counter<<endl;
		}