#include<bits/stdc++.h>
using namespace std;


int main(){
	 int n;
	 cin >> n; 

	 vector<int> v(n); // Initializing a vector of size n //
	 for(int i=0;i<n;i++){
	 	cin >> v[i];
	 }


	 sort(v.begin(),v.end());// sorting the data 
     

     for(auto it: v){
        cout << it <<" ";
     }

     cout << "printing the vector using Iterator " << endl; // 
     // vector<int> ::iterator it = v.begin();  // A way to declare an iterator // 

     for(auto it = v.begin();it != v.end();it++){
       cout << (*it) << endl;
     }
     cout << endl;
     cout << endl;
      int x;
      cin >> x;
    auto it = lower_bound(v.begin(),v.end(),x); // finding an element greater than equal to variable x 

    // if not found is will return iterator to v.end();
    // otherwise it will give the iterator to the desired element //

     if(it==v.end()){
     	cout << "Not found" << endl;
     }else{
     	cout << "result " << *(it) << endl;
     }


     map<int,int> mp;

   

    for(auto it: v){
    	mp[it]++;
    }
    // using map to storing the frequency // 
    for(auto it:mp){
    	cout << it.first << " " << it.second << endl;
    }

    cout << endl;
    vector<pair<int,int>> v2;
    for(int i=0;i<n;i++){
    	 int x,y;
    	 cin >> x >> y;
    	 v2.push_back({x,y});
    }
    

    sort(v2.begin(),v2.end(),[&](pair<int,int> &p1,pair<int,int> &p2){
        
        if(p1.first==p2.first){
           return p1.second > p2.second;
        }else{
           return p1.first < p2.first;
        }
    });

    // sorting an array based on the first element if first elements 
    // are equal in some cases then sort int descending order on the basis 
    // of second element in the pair //


    for(auto it: v2){
    	cout << it.first <<" " << it.second << endl;

    }



}