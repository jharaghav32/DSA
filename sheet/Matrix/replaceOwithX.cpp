// problem LInk:https://www.geeksforgeeks.org/given-matrix-o-x-replace-o-x-surrounded-x/

#include<bits/stdc++.h>
using namespace std;
int main(){

char mat[6][6] =  {{'X', 'O', 'X', 'X', 'X', 'X'},
                     {'X', 'O', 'X', 'X', 'O', 'X'},
                     {'X', 'X', 'X', 'O', 'O', 'X'},
                     {'O', 'X', 'X', 'X', 'X', 'X'},
                     {'X', 'X', 'X', 'O', 'X', 'O'},
                     {'O', 'O', 'X', 'O', 'O', 'O'},
                    };
                    cout<<"Before Updation"<<endl;
                    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<mat[i][j]<<"   ";
        }
        cout<<endl;
      }
      for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
          if(mat[i][j]=='O'){
            if(mat[i-1][j]=='X'&&mat[i+1][j]=='X'&&mat[i][j+1]=='X'&&mat[i][j-1]=='X')
            mat[i][j]='X';
          }
        }
      }
      cout<<"After uPdataion "<<endl;
      for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<mat[i][j]<<"   ";
        }
        cout<<endl;
      }












    return 0;
}