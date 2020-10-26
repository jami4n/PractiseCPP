#include <iostream>

using namespace std;


int main(){

    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int original = n;
    int sum = 0;

    while(n > 0){
        int lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n = n/10;
    }

    if(original == sum){
        cout<<sum<<"is a Armstrong number";
    }else{
        cout<<sum<<"is not a Armstrong number";
    }


    return 0;
}