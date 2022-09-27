#include <iostream>
using namespace std;
 

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






 
/*
///////////////////////////////////////////////////// Print  pyramid of reverse char ////////////////////////////////////

int main(){
  int n;
  cin >> n;
 int row = 1;
  while(row <= n){
    int col = 1;
    char start= 'A'+ n-row;
    while (col <= row)
    {
      cout << start << " ";
      start++;
      col++;
    }
    cout << endl;
    row++;
  }
}
/////////////////////////////// Output ////////////////////////
                        // D 
                        // C D
                        // B C D
                        // A B C D
 
/////////////////////////////// Print pymid of char ///////////////////////////////////////
int main (){
  int n;
  cin >> n;
  int row = 1;

  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
     char ch = 'A' + col + row -2;
     cout << ch << " ";
     col++;
    }
    cout << endl;
    row++;
  }  
}
/////////////////////////////////////// Output /////////////////////////////////
                        // A
                        // B C
                        // C D E
                        // D E F G


////////////////////////////////////////////// Print charcter of pyramid ///////////////////////////

int main (){
  int n ;
  cin >> n;
  int row = 1;
  char start = 'A';
  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout <<  start << " ";
      start++;
      col++;
    }
    cout << endl;
    row++;
  }  
}
/////////////////////////////////// Output /////////////////////////////////
                      // A 
                      // B C
                      // D E F
                      // G H I J




////////////////////////////////////////////// Print pyramid of Character /////////////////////////////////////////////
int main(){
  int n;
  cin >> n;
  int row = 1;
  while (row <= n)
  {

    int col = 1;
    while (col <= row)
    {
       char ch = 'A' + row - 1;
       cout << ch;
       col++;
    }
    cout << endl;
    row++;
  }
}
/////////////////////////////////////// Output //////////////////////////////
              // A
              // B B
              // C C C
              // D D D D

 //////////////////////////////////////////////////// Print pyramid of Charcter series///////////////////////////////////////////

int main(){
  int n;
  cin >> n;
  int row = 1;
  while (row <= n)
  {

    int col = 1;
    while (col <= row)
    {
       char ch = 'A'+ col - 1;
       cout << ch;
       col++;
    }
    cout << endl;
    row++;
  }
}
///////////////////////////////// Output //////////////////////////////
                // A
                // AB
                // ABC
                // ABCD
                // ABCDE



//////////////////////////////////////// Print series of Character //////////////////////////////////////////////
int main (){
  int n;
  cin >> n ;
  int row = 1;
  char start ='A';
  while (row <= n)
  {
    int col = 1;
    while (col <= n)
    {
      cout << start << " ";
      start++;
      col++;
    }
    cout << endl;
    row++;
  }

}

//////////////////////////////////////// Output ///////////////////////////
                      // A B C
                      // D E F
                      // G H I



///////////////////////////////////////// Print Charater of series ///////////////////////
int main()
{
  int n;
  cin >> n;
  int row = 1;

  while (row <= n)
  {
    int col = 1;
    while (col <= n)
    {
      char val = 'A' + row + col - 2;
      cout << val << " ";
      col++;
    }
    cout << endl;
    row++;
  }
}
///////////////////////////////////////// Output ///////////////////////////////////
                  // A B C 
                  // B C D
                  // C D E



//////////////////////////////////////////////// Print character of series ///////////////////////////////////
int main(){
  int n;
  cin >> n;
  int row = 1;

  while (row <= n)
  {
    int col = 1;

    while (col <= n)
    {
      char ch = 'A' + col - 1;
      cout << ch;
      col++;
    }
    cout << endl;
    row++;
  }

}
/////////////////////////////////////////////// Output ////////////////////////////////////////
                // A B C D
                // A B C D
                // A B C D
                // A B C D



//////////////////////////////////////////////////// Print character series n/n /////////////////////////////////////

int main(){
  int n;
  cin >> n;
  int row =1;

  while (row <=  n) {
   int col = 1;
     char ch ='A' + row-1;
   while (col <= n)
   {
    cout << ch << " ";
    col++;
   }
   cout << endl;
   row++;
  }

}
/////////////////////////// Output /////////////////////////////

                   // A A A A
                   // B B B B
                   // C C C C
                   // D D D D


*/
