#include<iostream>
using namespace std;

typedef long long int ll;

ll power_(ll a, ll b) { 
  ll res = 1; 
  while (b > 0) {
    if (b & 1) res = res * a; 
    a = a * a; 
    b >>= 1;
  } 
  return res;
}
ll addition(ll a,ll b){
   return a + b;
}
ll subtraction(ll a,ll b){
   return a - b;
}
ll multiplication(ll a,ll b){
   return a * b;
}
ll division(ll a,ll b){
   return a / b;
}


int main(){

    // ll is long long integer (64 bit signed)//
     ll a,b;
   
  
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
     
    char operation;
    
    cout << "Enter + for addition" <<endl;
    cout << "Enter - for subtraction" <<endl;
    cout << "Enter * for multiplication" << endl;
    cout << "Enter / for division" << endl;
    cout << "Enter ^ for power" << endl;
    cin >> operation;
    if(operation=='+'){
      cout << "result is " << addition(a,b) << endl;
    }else if(operation=='-'){
        cout << "result is " << subtraction(a,b) << endl;
    }else if(operation=='*'){
         cout << "result is " << multiplication(a,b) << endl;
    }else if(operation=='/'){
      if(b==0){
        cout << "Division by Zero is not allowed" << endl;
      }else{
        cout << "result is " << division(a,b) << endl;
      }
    }else if(operation=='^'){
         cout << "result is " << power_(a,b) << endl;
    }else{
      cout << "operation Invalid" <<endl;
    }

}