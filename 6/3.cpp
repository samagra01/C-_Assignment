#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

class Rectangle{
    int height,width;
public:
    void set_dimension(int height,int width){
        this->height = height;
        this->width = width;
    }

    void get_dimensions(){
        cout << "height is " << height <<" " << "width is " << width << endl;
    }
};
int main(){
  
    Rectangle r1;
    
    // r1.height = 3; we can assign directly because height is private 
    r1.set_dimension(3,4); // using setter function to set the dimensions which is public  //

    r1.get_dimensions();
   
}