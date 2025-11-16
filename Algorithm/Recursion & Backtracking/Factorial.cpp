#include <iostream>
using namespace std;

long long factorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
  
    int num;
    
    cin >> num;
    

    if (num < 0) 
        return 0;
    
    long long result = factorial(num);
    
    cout <<  result << endl;
    
    
    return 0;
}