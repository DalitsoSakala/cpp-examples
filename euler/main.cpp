#include<iostream>


using namespace std;

extern void mk_euler(unsigned int);
extern double euler;

int main(int argc, char** argv){
    int terms;
    cout<<"How many terms are needed for euler? ";
    cin>>terms;

    mk_euler(terms);
    cout<<endl<<"The euler number using "<<terms<<" term(s) is "
        <<euler<<endl;
    return 0;
}
