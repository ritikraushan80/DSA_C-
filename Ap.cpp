#include <iostream>
using namespace std;

int printAp(int n){
    int  ans = (3*n+7);
    return ans;
}

int main(){
    int n;
    cin >> n;

    int result = printAp(n);
    cout << "result = " << result << endl;
}