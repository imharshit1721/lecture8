#include<iostream>
using namespace std;


int main(){
    
    
    int row , col , n;
    
    row = 1;
    while(row <= 5){
        int space  = 5 - row;
        while(space){
            cout<<" ";
            space = space - 1; 
        }
        
        int col = 1;
        while(col <= row){
            cout<<"* ";
            col = col  + 1;
        }
        
        cout<<endl;
        row = row + 1;
    }
    
   row = 4;

    while(row >= 1){
        int space = 4 - row;
        while(space >= 0){
            cout<<" ";
            space = space - 1;
        }
        
        
         col = 1;
         while(col <= row){
             cout<<"* ";
             col = col  + 1;
         }
        
        cout<<endl;
        row = row  - 1; 
    }
}






output:
---------------------------------------

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
















