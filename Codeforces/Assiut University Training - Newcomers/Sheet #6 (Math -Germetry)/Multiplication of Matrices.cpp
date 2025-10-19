#include <iostream>
using namespace std;


int main() {
   int c1,r1; cin >>c1>>r1;
   int ma1[c1+1][r1+1];
   for(int i=1;i<=c1;i++){
       for(int j=1;j<=r1;j++)
       cin>>ma1[i][j];
   }
   int c2,r2 ; cin>>c2>>r2;
 int mat2[c2+1][r2+1];
 for(int i=1;i<=c2;i++){
       for(int j=1;j<=r2;j++)
       cin>>mat2[i][j];
   }
   long long  mat3[c1+1][r2+1]={};
   for(int i=1;i<=c1;i++){
       for(int j=1;j<=r2;j++){
           for(int k=1;k<=c2;k++){
               mat3[i][j]+=ma1[i][k]*mat2[k][j];
           }
       }
   }
   for(int i=1;i<=c1;i++){
       for(int j=1;j<=r2;j++){
           cout<<mat3[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}