#include<iostream>
using namespace std;

typedef long long int ll;


int main(){
  
  cout << "Enter a string" << endl;

  string s;
  cin >> s;

  int size = s.size();

  for(int i=0;i<(size)/2;i++){
     swap(s[i],s[size-1-i]);
  }
  cout << "Resvesed string" << endl;
  cout << s << endl;

}