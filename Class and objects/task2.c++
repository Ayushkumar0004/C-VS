#include<iostream>
using namespace std;
class add{
int a, b;
public:
void sum(){
cout<<"Enter the first number "<<endl;
cin>>a;
cout<<"Enter the second number "<<endl;
cin>>b;
int s = a + b;

cout<<"Sum of the two numbers is "<<s<<endl;
}
};

int main(){
add a1;
a1.sum();
return 0;
}