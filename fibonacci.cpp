#include <iostream>
using namespace std;

void fib(int num){
    int a = 0;
    int b = 1;
    int c;

    for(int i = 0; i < num ;i++){
        cout<<a<<endl;

        c = a + b;
        a = b;
        b = c;
    }

    return;

}

int main(){
        
    int n;
    cout<<"Enter a number for sequenece length:"<<endl;
    cin>>n;

    fib(n);

    return 0;
}