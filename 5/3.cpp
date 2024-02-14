#include<iostream>
using namespace std;

typedef long long int ll;


int main(){

    // ll is long long integer (64 bit signed)//
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    // creating dynamic memory in heap during runtime // 
    
    int* arr = new int[n];

    cout <<"Enter " << n << " " << "elements"<< endl;
    for(int i=0;i<n;i++){
       cin >> arr[i];
    }
    for(int i=0;i<n;i++){
      *(arr +i) = 10 + i;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}