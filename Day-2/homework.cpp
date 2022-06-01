#include<iostream> // recursion 
using namespace std;

int two(int n){ // 2 * n
	int res = 1;
	if(n == 1){
		return 2*1;
	}

	res = 2 * two(n-1);
	return res;
}

int main(){
	int n;
	cin>>n;

	cout<<two(n);
}