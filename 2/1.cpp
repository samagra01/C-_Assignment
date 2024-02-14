#include<iostream>
using namespace std;

int main(){

	 int number1,number2;
     cout << "Enter number1 " << endl;
	 cin >> number1;

	 cout << "Enter number2 " << endl;
	 cin >> number2;

	 // operations + - / *

	 char operation;

	 cout << "Enter operation " << endl;
	 cin >> operation;

	switch(operation){
      case '+' :{
      	cout << "Result " <<  number1 + number2 << endl;
      	break;
      }
      case '-' :{
     	 cout << "Result " << number1 - number2 << endl;
     	 break;
      }
      case '*' :{
      	 cout << "Result " << number1*number2 << endl;
      	 break;
      }
      case '/' :{
      	if(number2==0){
          cout << "Division by Zero is Invalid" << endl;
      	}else{
          cout << "Result " << number1/number2 << endl;
      	}
      	break;
      }
      default: {
        cout << "operation Invalid" << endl;
      } 


	}
}