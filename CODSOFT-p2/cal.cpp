#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"enter operator";
    cin>>op;
    cout<<"enter num1& num2"<<endl;
    cin>>num1>>num2;
    
    switch(op){
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        case '/':
        if(num2!=0)
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        else
        cout<<"error";
        break;
        default:
        cout<<"invalid input";
        break;

    }
    return 0;
}
