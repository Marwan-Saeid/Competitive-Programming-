#include <iostream>
using namespace std;


int fibonacci(int n) {
    
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    
    int num;
    cin>>num;
    
   int result=fibonacci(num);
   
   cout<<result<<endl;
    
    return 0;
}