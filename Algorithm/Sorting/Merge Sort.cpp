#include<iostream>
using namespace std;

void merge(int a[], int left , int mid ,int right ){
    
    int first_arr[mid-left+1];
    int second_arr[right-mid];
    
    for(int i=left,j=0;i<=mid;i++,j++)
        first_arr[j]=a[i];
    
    for(int i=mid+1,j=0;i<=right;i++,j++)
        second_arr[j]=a[i];
    
    int first=0,second=0;
    int arr[right-left+1],index=0;
    
    while(first<(mid-left+1) && second<(right-mid) ){
        if(first_arr[first]<second_arr[second])
            arr[index++]=first_arr[first++];
        else
            arr[index++]=second_arr[second++];
    }
    
    while(first<(mid-left+1))
            arr[index++]=first_arr[first++];
    
    while(second<(right-mid))
            arr[index++]=second_arr[second++];

    for(int x=left,y=0;x<=right;x++,y++)
        a[x]=arr[y];
        
}

void mergesort(int a[],int left,int right){
    if(left>=right)
        return;
    int mid=(left+right)/2;

    mergesort(a,left,mid);
    mergesort(a,mid+1,right);

    merge(a,left,mid,right);
}

int main(){

    int size;
    cin>>size;
    int arr[size];
    for(int& x: arr) cin>>x;

    mergesort(arr,0,size-1);

    for(int x:arr) cout<<x<<" ";
}