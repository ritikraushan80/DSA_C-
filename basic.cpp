#include <iostream>
using namespace std;

int main(){
  int n;
       cin >> n ;
   int sum = 0;
   int i = 2;
 while (i < n)
 {
    if (i%2 == 0)
  sum += i;
  i++;
 }
 cout << sum ;
 return 0;
}


/*

 //////////////////////////////// Sum of n Numbers ////////////////////////
int main()
{
  int n, i = 1;
  cin >> n;
  int sum = 0;

  while (i <= n)
  {
    sum += i;
    i++;
  }
  cout << sum;
}



//////////////////////    Print n numbers   ////////////////////////
int main()
{
  int n;
  int i = 1;
  cin >> n;

  while (i <= n)
  {
    cout << i << " ";
    i++;
  }
}



//////////////////////  Check UpperCase and Lowercase   ///////////////////////

int main()
{
  char ch;

  cin >> ch;

  if (ch >= 'A' && ch <= 'Z')
  {
    cout << " This is Upper case" << endl;
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    cout << "This is Lower Case" << endl;
  }
  else if (ch >= '0' && ch <= '9')
  {
    cout << "This is Numeric" << endl;
  }
  else
  {
    cout << "Nothing";
  }
}

///////////////////////////////  Find Factorial number  /////////////////////

int main() {
  int i,fact=1,number;
 cout<<"Enter any Number: ";
cin>>number;
 for(i=1;i<=number;i++){
     fact=fact*i;
 }
 cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
 return 0;
}
*/

///////////////////////////////////////////////  javascript /////////////////////////////////////
/*

// Power of n numbers in js

const power = (base,index)=> {
    if(index == 0) return 1
    else if(index == 1) return base
    let res =  power(base,index-1)
    let result = base*res;
    return result;
}

console.log(power(2,4))

//////  sum of 1/2pow(n)

function gsum(n){
    if(n == 0) return 1;

    let  smallsum = gsum(n-1);
    let res = smallsum + 1/ Math.pow(2, n);
     return res;


}

 console.log(gsum(3));

////////////////////////////////////////////////
 function gsum(n){
    if(n == 0 || n == 1) return 1;

    let  smallsum = gsum(n-1);
    let res = smallsum + 1/ Math.pow((n-1), 3);
     return res;


}

 console.log(gsum(5));
*/