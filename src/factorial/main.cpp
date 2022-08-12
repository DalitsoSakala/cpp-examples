#include<iostream>

using namespace std;

extern unsigned long mk_factorial(unsigned long);

int main(int argc, char** argv){
    int n;
    char repeat;
    do{
    
        cout<<endl<<"Enter a number for n!.\nn = ";
        cin>>n;
        cout<<endl<<n<<"! is "<<mk_factorial(n)
            <<endl
            <<"Repeat (y=Yes) ";
        cin>>repeat;
    }while(repeat=='y');
    return 0;
}
