#include <bits/stdc++.h>
using namespace std;
int arr[9][9]={};

bool save(int row, int col){
    int c[10]={}, cc[10]={};
    
    
    for(int i=0;i<9;i++){
        c[arr[row][i]]++;
        cc[arr[i][col]]++;
    }
    for(int i=1;i<=9;i++){
        if(c[i]>=2 || cc[i]>=2)
            return false;
    }
    
    int boxRow = (row/3)*3;
    int boxCol = (col/3)*3;
    int c1[10]={};
    
    for(int i=boxRow; i<boxRow+3; i++){
        for(int j=boxCol; j<boxCol+3; j++){
            c1[arr[i][j]]++;
        }
    }
    for(int i=1; i<=9; i++){
        if(c1[i]>=2)
            return false;
    }
    
    return true;
}

void print(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------"<<endl;
}

void sudoku(int row, int col){
    
    if(row==9){
        print();
        return;
    }
    
   
    int nextRow = row;
    int nextCol = col + 1;
    if(nextCol == 9){
        nextCol = 0;
        nextRow++;
    }
    
  
    for(int i=1; i<=9; i++){
        arr[row][col] = i;
        
        if(save(row, col))
            sudoku(nextRow, nextCol);
        
        arr[row][col] = 0;
    }
}

int main() {
    
    
    sudoku(0, 0);
}