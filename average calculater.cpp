#include<iostream>
#include<vector>
#include<string>
using namespace std;


vector<double> v1;
double sum=0;
void quantity(){
    int q;
    cout<<"pls type the number quantity of your number "<<endl;
    cin>>q;
    
    if(q<=1){
        cout<<"The quantity must be at least 2"<<endl;
        exit(404);
    }
    
    if(q>1){
        v1.resize(q);
        for(int i=0;i<q;i++){
        cout<<"type the number "<<i+1<<endl;
        cin>>v1[i];
        
        }
    }
}

int main(){
    int a=0;
    quantity();
    for(size_t i=0;i<v1.size();i++){
        sum=sum+v1[i];
        a++;
    }
    cout<<"the average is "<<sum/a;
    
}
