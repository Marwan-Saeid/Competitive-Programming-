#include <iostream>
using namespace std;
bool board[8][8];

void printBoard() {
    for(int row=0;row<8;row++){
        for(int col=0;col<8;col++){
            cout << (board[row][col] ? "Q " : ". ");
        }
        cout << endl;
    }
    cout << "---------------\n";
}

bool safe(int row,int col){
  
  for(int j=0;j<8;j++){
        if(board[row][j])
        return false;
    }
  
  for(int j=0;j<8;j++){
       if(board[j][col])
       return false;
    }
    
  
  for(int i=row,j=col;i>=0 && j>=0;i--,j--){
    if(board[i][j])
    return false;
  }
   
  for(int i=row,j=col;i<8 && j<8;i++,j++){
    if(board[i][j])
    return false;
  }
  
  for(int i=row,j=col;i>=0 && j<8;i--,j++){
    if(board[i][j])
    return false;
  }
  
  
  for(int i=row,j=col;i<8 && j>=0;i++,j--){
    if(board[i][j])
    return false;
  }
  
  return true;
  
}
void N_Queens(int row){
  
  if(row==8){
    printBoard();
    return ;
  }
  
  for(int col=0;col<8;col++){
    if(safe(row,col)){
      board[row][col]=true;
      N_Queens(row+1);
      board[row][col]=false;
    }
    
  }
  
}
int main() {
  N_Queens(0);
    return 0;
}