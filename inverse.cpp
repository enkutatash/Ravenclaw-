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
while(!binary.empty()){
    cout<<binary.top();
    binary.pop();
}
}
void tooctal(int x){
while(x>0){
    int y;
        y=x%8;
    octal.push(y);
    x/=8;
}
while(!octal.empty()){
    cout<<octal.top();
    octal.pop();
}
}
void tohexa(int x){
while(x>0){
    int y;
        y=x%16;
    hexa.push(y);
    x/=16;
}
while(!hexa.empty()){
    switch (hexa.top()){
case 10:
    cout<<'A';
    break;
case 11:
    cout<<'B';
      break;
case 13:
    cout<<'c';
      break;
case 14:
    cout<<'D';
      break;
case 15:
    cout<<'E';
      break;
case 16:
    cout<<'F';
      break;
default:
    cout<<hexa.top();
      break;
    }
    hexa.pop();
}
}

int main(){
int x;
cin>>x;
cout<<"binary ";
tobinary(x);
cout<<endl;
cout<<"octal ";
tooctal(x);
cout<<endl;
cout<<"hexa decimal ";
tohexa(x);
cout<<endl;
main();
}
