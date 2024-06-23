#include <iostream>
using namespace std;
void Calc(){
    float a,b;
    int opr;
    cout<<"Enter the First Number: ";
    cin>>a;
    cout<<endl<<"Enter the Second Number: ";
    cin>>b;
    cout<<endl<<"Select the Operation:";
    cout<<"\n'1' for Addition\n'2' for Subtraction\n'3' for Multiplication\n'4' for Division\n";
    cin>>opr;
    switch (opr)
    {
    case 1:
        cout<<"Answer="<<a+b;
        break;
    case 2:
        cout<<"Answer="<<a-b;
        break;
    case 3:
        cout<<"Answer="<<a*b;
        break;
    case 4:
        cout<<"Answer="<<a/b;
        break;    
    default:
        break;
    }
    int m;
    cout<<"\nDo you want to perform another calculation?\n1: Yes\n2: No\n";
    cin>>m;
    if(m==2){
        cout<<"Thank You for using C++ Calculator!";
    }
    else{
        Calc();
    }
}
int main(){
    cout<<" _____________________"<<endl;
    cout<<"|  _________________  |"<<endl;
    cout<<"| | KHYATI      100 | |"<<endl;
    cout<<"| |_________________| |"<<endl;
    cout<<"|  ___ ___ ___   ___  |"<<endl;
    cout<<"| | 7 | 8 | 9 | | + | |"<<endl;
    cout<<"| |___|___|___| |___| |"<<endl;
    cout<<"| | 4 | 5 | 6 | | - | |"<<endl;
    cout<<"| |___|___|___| |___| |"<<endl;
    cout<<"| | 1 | 2 | 3 | | x | |"<<endl;
    cout<<"| |___|___|___| |___| |"<<endl;
    cout<<"| | . | 0 | = | | / | |"<<endl;
    cout<<"| |___|___|___| |___| |"<<endl;
    cout<<"|_____________________|"<<endl;
    cout<<"Welcome to C++ Calculator!"<<endl;
    Calc();  
}