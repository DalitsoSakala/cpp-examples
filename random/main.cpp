// Demonstrates usage of random.cpp
#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>
#include<iomanip>

using namespace std;

extern unsigned short int current_rand;
extern void mk_rand(void);
int main(int argc, char** argv){
    char repeat;
    int* rand_pair;
    vector<int*> recent_rands;

    srand(time(0));
    do{
        rand_pair=new int[2];
        for(unsigned short i=0; i<2; i++){
            mk_rand();
            *(rand_pair+i)=current_rand;
        }
        cout<<endl<<"The recent random pair is"<<setw(4)
            <<rand_pair[0]<<" & "<<rand_pair[1]
            <<endl<<"Do yo want another round (y=Yes): ";
        
        recent_rands.push_back(rand_pair);
        cin>>repeat;
    }while(repeat=='y');
    return 0;
}

