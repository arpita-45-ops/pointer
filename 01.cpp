#include<iostream>
using namespace std;
int main(){
    int n, d, ans;
    cin>>n;
    cin>>d;
    try{
        if (d == 0){
            throw 0;
        }
    
    ans= n/d;
    cout<<"Answer is: "<<ans;
    }
    catch(int e){
        cout<<"exception caught->"<<e<<endl;
    }
    cout<<"statement 3";
}