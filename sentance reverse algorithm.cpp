#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> sen;

int main(){
    string s;
    cout<<"type the sentance ";
    getline(cin,s);
    sen.resize(s.size());
    
    for(size_t i=0;i<s.size();i++){
        sen[i]=s[i];
    }
    reverse(sen.begin(), sen.end()); 
    
    for (string x : sen) {
    cout << x;
    }
    
    return 0;
}