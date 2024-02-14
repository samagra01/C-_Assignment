#include<iostream>
using namespace std;

typedef long long int ll;


int main(){

   int n;
   cout << "Enter the number of bytes of memory required" << endl;

   cin >> n;

   char* mem = (char*)malloc(n*sizeof(char));
    
   if(mem==NULL){
    cout <<"Memory insufficient" << endl;
   }else{
    cout << "Memory Allocated" <<endl;
   }

}