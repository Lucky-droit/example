#include<iostream> 
using namespace std;

class DNE_msg{
public: 
DNE_msg(){
cout<<"You are not authorized to Enter here Sir" ; 
}
DNE_msg(string name){

cout<<name<< " ! You are not authorized to Enter here Sir";
}
};

int main(){
DNE_msg m("Manan") ; 

return 0 ; 
}
