#include<iostream> 

using namespace std;

class Circle{
public : 
int radius ; 
Circle(int r){
radius = r ;
}
int top_head(){
return radius*radius*3.14;
}
};

class Cone{
  public : 
  Circle C ; 
  int height ; 
  Cone(int h , int r )  :  C(r) , height(h){} 
  
  int Area(){
    return height*C.top_head(); 
    }
  
};

int main(){
Cone cone(10,10) ; 
cout<< cone.Area() ; 
return 0 ; 
}
