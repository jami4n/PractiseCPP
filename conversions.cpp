#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;

    int x = 1;  

    while(n > 0){
        int y = n % 10;
        ans += y * x;
        //cout << "ans : " << ans  << " x = "<< x << endl;
        x *= 2;
        n /= 10;
    }

    return ans;
}

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n > 0){
        int y = n % 10;
        ans += y * x;
        x *= 8;
        n /= 10;
    }

    return ans;
}

int hexadecimalToDecimal(string n){
    int ans = 0;
    int x = 1;

    int s = n.size();

    for(int i = s - 1; i >= 0 ;s--){

        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - 0);
        }else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }

        cout<<ans;

        x*= 16;
    }  


    return ans;
}   

int decimalToBinary(int n){ //needs validation

    int ans;
    int x = 1;

    while(x <= n){
        x *= 2;
    }

    x /= 2;
    
    while( x > 0){
        int lastDigit =  n/x;

        n -= lastDigit * x;
        x /= 2;

        ans = ans*10 + lastDigit;

    }


    return ans;
}

int main(){

    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    cout << binaryToDecimal(n) << endl;


    return 0;
}