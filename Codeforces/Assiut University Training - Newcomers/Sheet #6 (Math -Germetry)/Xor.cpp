#include <iostream>
using namespace std;


int main() {
   long long  n , m , q; cin>>n>>m>>q;
    int re=q%3;
    if(re==1)
    cout<<n<<endl;
    else if(re==2)
    cout<<m<<endl;
    else
    cout<<(n^m)<<endl;
    return 0;
}
 