#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
//any number in any base to decimal
int todecimal(int x,int b){
     int dec = 0, i = 0, rem;

  while (x!=0) {
    rem = x % 10;
    x /= 10;
    dec += rem * pow(b, i);
    ++i;
  }
  return dec;
}
stack<int>converted;
//decimal to any base
void converter(int num,int base){
while(num>0){
    int y;
        y=num%base;
    converted.push(y);
    num/=base;
}
while(!converted.empty()){
        if(base==16){
            switch (converted.top()){
case 10:
    cout<<'A';
    break;
case 11:
    cout<<'B';
      break;
case 12:
    cout<<'c';
      break;
case 13:
    cout<<'D';
      break;
case 14:
    cout<<'E';
      break;
case 15:
    cout<<'F';
      break;
default:
    cout<<converted.top();
      break;
    }
        }else{
            cout<<converted.top();
        }

    converted.pop();
}
}
int main()
{
    int num1,base1,z,base2;
    cout<<"enter number ";cin>>num1;
    cout<<"enter base of number you entered ";cin>>base1;
    cout<<"to which base you want to change ";cin>>base2;
z=todecimal(num1,base1);
converter(z,base2);

return 0;
}
