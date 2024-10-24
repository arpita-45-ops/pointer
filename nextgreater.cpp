#include<iostream>
#include<vector>
using namespace std;
void nextgreater(vector<int> numbers){
    for(int i=0;i<numbers.size();i++){
        bool found= false;
        for(int j=i+1;j<numbers.size();j++){
            if(numbers[i]<numbers[j]){
                cout<<numbers[i]<<" "<<numbers[j]<<endl;
                found=true;
                break;
            }
        }
            if(!found) {
                cout<<numbers[i]<<" -1"<<endl;
            }
        }
    }


int main(){
    int num;
    cin>>num;
    vector<int> numbers(num);
    for(int i=0;i<num;i++){
        cin>>numbers[i];
    }
    nextgreater(numbers);
    return 0;
}
