#include<iostream>
using namespace std;


int factorial(int num){
  if(num==0){
    return 1;
  }
  return num*factorial(num-1);
}
int main(){

	
   int n;

   cout <<  "Enter a number less than 12 and greater equal to 0" << endl;
   cin >> n;

   cout << factorial(n) <<endl;




   
   
}