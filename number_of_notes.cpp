#include <iostream>
using namespace std;

int main(){
     
 int num, rem;

 cout << "Enter amount" << endl;
 cin >> num;
  
 switch (1)
 {
 case 1: cout << " 100 rupees notes : " << num/100 << endl;
                rem = num-(100*(num/100));
case 2: cout << "50 rupees notes :" << rem/50 << endl;
                rem = rem-(50*(rem/50));
  case 3: cout << "20 rupees notes :" << rem/20 << endl;
                rem = rem-(20*(rem/20));
case 4: cout << "1 rupees notes :" << rem ;
//   rem = rem-(10*(rem/10));
                break;
 default: cout << "No money !!";
    break;
 }
    
    
}