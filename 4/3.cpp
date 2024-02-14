  #include<iostream>
using namespace std;

typedef long long int ll;


int main(){
    int n;
    cout << "Enter the size of the Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n <<" " << "Elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int min_ele= INT_MAX,max_ele = -1;

    for(int i=0;i<n;i++){
        min_ele=min(min_ele,arr[i]);
        max_ele=max(max_ele,arr[i]);
    }
    cout <<"Minimum element is " << min_ele << endl;
    cout <<"Maximum element is " << max_ele << endl;



}