#include <iostream>

#include <iomanip>

using namespace std;

const int D =8;

bool canPlace(int board[D][D],int n,int r,int c){
  return
      r >= 0 && r <n &&
      c >=0 && c < n &&
      board[r][c]==0;
}
 bool solveKnight(int board[D][D],int n,int move_no,int curRow,int curCol){
  if(move_no == n*n){
    return true;
  }
   int row_dir[]= {+2,+1,-1,-2,-2,-1,+1,+2};
   int col_dir[]= {+1,+2,+2,+1,-1,-2,-2,-1};
   for(int cur_dir =0;cur_dir<8;cur_dir++){
     int nextRow = curRow  + row_dir[cur_dir];
     int nextCol = curCol + col_dir[cur_dir];
     if(canPlace(board,n,nextRow,nextCol) == true){
       board[nextRow][nextCol]= move_no + 1;
      bool isSucess= solveKnight(board,n,move_no+1,nextRow,nextCol);
      if(isSucess ==true){
        return true;
      }else {
        board[nextRow][nextCol]=0;

      }
     }
   }
   return false;
 }
 void printBoard(int board[D][D],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j <n;j++){
      cout << setw(3) << board[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
   int board[D][D] = {0};
   int n;
   cin >>n;

   board[0][0]=1;
bool ans =   solveKnight(board,n,1,0,0);
if(ans == true ){

  printBoard(board,n);
}else {
  cout << "sorry!!!";
}
}
