#include<iostream>
using namespace std;

int main(){

	 // Let say we need to find the largest Number among three Numbers a,b and c//
   
   int a,b,c;
   cout << "Enter three numbers" << endl;
   cin >> a >> b >> c;

   int result = max(a,max(b,c));
   cout << "largest Number is " << result << endl;

   
}