#include<iostream>
using namespace std;

typedef long long int ll;

ll exponentCalculator(ll a, ll b) { 
  ll res = 1; 
  while (b > 0) {
    if (b & 1) res = res * a; 
    a = a * a; 
    b >>= 1;
  } 
  return res;
}


int main(){

    // ll is long long integer (64 bit signed)//
     ll number,power;
  
     cin >> number >> power; 
     
     cout << "(number)^power is " << exponentCalculator(number,power) << endl;
}