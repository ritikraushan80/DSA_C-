#include <iostream>
using namespace std;

/*

int main(){
  int n;
  cin >> n;
  int row = 1; 
   while (row <= n)
   {
    int col = 1;
    int val = n - row + 1;
    while (col <= val )
    {
      cout << col << " " ;
      col++;
    }  
    col =1; 
    while (col <= (row-1)*2)
    {
        cout << "* " ;
        col++;
    }
    
    col = n-row + 1;
    while (col >= 1)
    {
        cout << col << " ";
        col--;
    }
    
    cout << endl;
    row++;
   } 
}
//////////////////////////////////////////////////////// Output /////////////////////////////

                                            // 1 2 3 4 5 5 4 3 2 1 
                                            // 1 2 3 4 * * 4 3 2 1
                                            // 1 2 3 * * * * 3 2 1
                                            // 1 2 * * * * * * 2 1 
                                            // 1 * * * * * * * * 1




int main(){
  int n;
  cin  >> n;
 int row = 1;

 while (row <= n)
 {
   int space = n-row;
   while (space)
   {
    cout << "  ";
    space--;
   }
   int col = 1;
    while (col <= row)
    {
      cout << col << " " ;
      col++;
    }
    int start = row -1 ;
    while (start)
    {
       cout << start << " ";
       start--;
    }
    
  cout << endl;
  row++; 
 } 
}
///////////////////////////////////// Output ///////////////////////

                          //        1 
                          //      1 2 1
                          //    1 2 3 2 1
                          //  1 2 3 4 3 2 1

*/