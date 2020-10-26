#include <iostream>
using namespace std;

int main(){

        
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    for(int i = 1; i <= n; i++){ //row

        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }

        for(int j = 0; j < n; j++){
            cout<<"*";
        }
        
        cout<<endl;

    }


    return 0;    
}