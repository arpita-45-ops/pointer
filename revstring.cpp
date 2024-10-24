#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
void revstring(string str){
    string sum= " ";
    for(int i= str.length()-1;i>=0;i--){
        sum+=str[i];
    }
    cout<<sum<<endl;
}
int main(){
    string word;
    cin>>word;
    revstring(word);
    return 0;
}