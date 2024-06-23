#include <iostream>
using namespace std;
void CtoF(){
    float c,f;
    cout<<"Enter the temperature in Celsius: ";
    cin>>c;
    f= (c * 9.0) / 5.0 + 32;
    cout<<"The temperature in Fahrenheit is: "<<f<<endl;
}
void FtoC(){
    float c,f;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>f;
    c= (f - 32.0) * 5.0 / 9.0;
    cout<<"The temperature in Celsius is: "<<c<<endl;
}
void Calc(){
    int n;
    cout<<"What do want to perform?";
    cout<<"\n1: Celsius to Fahrenheit Conversion\n2: Fahrenheit to Celcius Conversion\n";
    cin>>n;
    if(n==1){
        CtoF();
    }
    else{
        FtoC();
    }
    int m;
    cout<<"Do you want to perform another conversion?\n1: Yes\n2: No\n";
    cin>>m;
    if (m==2){
        cout<<"Thank You for using C++ Temperature Converter!";
    }
    else{
        Calc();
    }
}
int main(){
    cout<<"Welcome to C++ Temperature Converter!"<<endl;
    Calc();   
}