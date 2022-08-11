#include<iostream>

using namespace std;

extern unsigned long fib_1;
extern unsigned long fib_2;
extern void mk_fib();

int main(int argc, char** argv){

    char repeat;
    do{
        mk_fib();
        cout<<fib_1<<", "<<fib_2<<". another set? (y=Yes): ";
        cin>>repeat;
        cout<<endl;
    }while(repeat=='y');
    return 0;
}
