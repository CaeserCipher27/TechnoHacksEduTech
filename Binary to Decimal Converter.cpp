#include <iostream>
#include <cmath>
using namespace std;
void BtoD(){
    long long b;
    cout << "\nEnter a Binary Number: ";
    cin >> b;
    int d = 0, i = 0, r;
    while (b!=0) {
        r = b % 10;
        b /= 10;
        d += r * pow(2, i);
        ++i;
    }
    cout<<"\nDecimal Number: "<<d<<endl;
}
void DtoB(){
    long long d;
    cout << "\nEnter a Decimal Number: ";
    cin >> d;
    long long b = 0;
    int r, i = 1;

    while (d!=0) {
        r = d % 2;
        d /= 2;
        b += r * i;
        i *= 10;
    }
    cout<<"\nBinary Number: "<<b<<endl;
}
void Perform(){
    int a;
    cout<<"What do you want to perform?\n1: Binary to Decimal Conversion\n2: Decimal to Binary Conversion\n";
    cin>>a;
    if(a==1){
        BtoD();
    }
    else{
        DtoB();
    }
    int m;
    cout<<"Do you want to perform another conversion?\n1: yes\n2: No\n";
    cin>>m;
    if(m==2){
        cout<<"Thank You for using C++ Binary and Decimal Number Converter!";
    }
    else{
        Perform();
    }
}
int main(){                                                                  
    cout<<"\nWelcome to C++ Binary and Decimal Number Converter!\n";
    Perform();
}
