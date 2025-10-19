#include <iostream>
using namespace std;

int main() {
    int n,k; cin>>n>>k;
    int array[n] ;
    for(int i=0;i<n;i++) cin>>array[i];
    long long max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        if(array[i]>0)
        max += array[i];
    }

    cout << max << endl;
    return 0;
}