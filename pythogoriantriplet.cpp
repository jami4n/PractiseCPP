#include <iostream>
#include<algorithm> 

using namespace std;


bool check(int x, int y, int z){
    
    int a,b,c;





    if(x > y && x > z){
        a = x;
        b = y;
        c = z;
    }else if(y > z){
        a = y;
        b = x;
        c = z;
    }else{
        a = z;
        b = x;
        c = y;
    }

    return (a * a) == (b * b) + (c * c);

}

int main(){

    int x,y,z;
    cout<<"Enter three numbers:"<<endl;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Is a Py triplet";
    }else{
        cout<<"Is not a Py triplet";
    }
    


    return 0;
}