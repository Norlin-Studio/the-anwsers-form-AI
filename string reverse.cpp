#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    string sen;
    cout<<"type a sentence "<<endl;
    getline(cin,sen);
    int s=sen.size();
    
    for(size_t i=0;i<s;++i){
        char a;
        a=sen[i];
        sen[i]=sen[s- 1];
        sen[s- 1]=a;
        s--;
    }
    cout<<sen;
}
