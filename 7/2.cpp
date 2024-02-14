#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std; 

int main() {


    

    string filename;
    cout << "Enter the name of the text file: " << endl;
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return 1; 
    }

    map<string, int> wordCounts;

    string word;
    while (file >> word) {
        wordCounts[word]++; 
    }
    cout << "Word " << " " << "Frequency" << endl;
    for(auto it: wordCounts){
        cout << it.first << " " << it.second << endl;
    }  
    return 0;
}