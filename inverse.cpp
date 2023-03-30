#include <iostream>
#include <stack>
using namespace std;
stack<int>binary;
stack<int>octal;
stack<int>hexa;
void tobinary(int x){
while(x>0){
        int y;
        y=x%2;
    binary.push(y);
    x/=2;
}
}
void tooctal(int x){
while(x>0){
    int y;
        y=x%8;
    octal.push(y);
    x/=8;
}
}
void tohexa(int x){
while(x>0){
    int y;
        y=x%16;
    hexa.push(y);
    x/=16;
}
}
void print(stack<int>name){
while(!name.empty()){
    cout<<name.top();
    name.pop();
}
}
int main(){
int x;
cin>>x;
tobinary(x);
tooctal(x);
tohexa(x);
cout<<"binary ";
print(binary);
cout<<endl;
cout<<"octal ";
print(octal);
cout<<endl;
cout<<"hexa decimal ";
print(hexa);
cout<<endl;
main();
}

