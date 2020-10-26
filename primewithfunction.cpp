#include <iostream>
#include <cmath>

using namespace std;

//user enters two numbers. Print all prime numbers between those 2 numbers
//10 20 >> 11,13,17,19

bool isPrime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    for(int i = a; i <= b; i++){

        if(isPrime(i)){
            cout<<i<<endl;
        }

    }


    return 0;
}

