#include <iostream>
using namespace  std;


int fibo(int n){
    
    int a =0;
    int b = 1;
        cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nextTerm = a+b;
        cout << nextTerm << " ";

        a=b;
        b = nextTerm;
    }
    return 0;
    
    // if (n <= 1)    
    //     return n;
    // int res = fibo(n-1) + fibo(n-2);
    // return res;
}

int main(){
    int n;
    cin >> n;

   fibo(n);
    
}