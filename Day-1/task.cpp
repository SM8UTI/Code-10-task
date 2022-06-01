#include<iostream>
using namespace std;

long long int fib(long long int n){
    if(n == 1 || n==0){
        return 1;

    }

    long long int res = n * fib(n-1);
    return res;
}


int main(){
    int n;
    cin>>n;

    cout<<fib(n);
}