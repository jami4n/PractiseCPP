#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int value = 0;

    for(int i = 1; i <= n; i++){

        for(int j = 0; j < i; j++){
            
            cout<<++value<<" ";
        }
        
        cout<<endl;

    }


    return 0;
}