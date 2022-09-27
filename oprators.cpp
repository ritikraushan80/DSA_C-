#include <iostream>
using namespace std;


int main (){
  
  for ( int i = 0; i <= 5 ; i++)
  {
    for (int j = i; j <=5; j++)
    {  
      if (i+j == 10)
      {
        break;
      }
      
    cout << i << " " << j << endl;
    }
  
    // if (i&1)
    // {
    //  continue;
    // }
    
    // i++;
  }
  
}









 /*

    int main(){
        int a = 1;
        int b = a++;
        int c = ++a;
        cout << b << endl;
        cout << c;
    }
    //////////////////// op /////////////

            // b=1;
            // c=3;


int main(){
    int a =1;
    int b = 2;

    if (a-- > 0 && ++ b > 2)
    {
     cout << " stage 1 if ";
    }else{
        cout << " stage 1 else ";
    }
    cout << a << " " << b << endl;
}
// op =  stage 1 if 0 3 ; 


int main(){
    int a, b =1;
      a = 10;
      if (++a)
        cout << b;       
      else  
        cout << ++b; 
      
}
/////////////////// op = 1

*/