#include<iostream>
using namespace std;

void power(int base,int raise,int value=1,int count = 0){
    if(count==raise){
        cout<<value<<endl;
        retrun;
    }
    value = base*value;
    count++;
    power(base,n,value,count);
    
 

    }

int main(){
    int n;
    cin>>n;
    // we need to find out 2^n
    power(2,n);


}