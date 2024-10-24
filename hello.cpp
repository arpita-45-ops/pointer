#include <iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"enter no of elements to input in an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of the array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<< "enter the target: "<<endl;
    cin>>target;
    bool found= false;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Yes"<<endl;
                found= true;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        cout<<"NO";
    }
    return 0;
}