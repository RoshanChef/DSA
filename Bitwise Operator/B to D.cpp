#include<iostream>
#include<cmath>

using namespace std;

int De(int n ){

	int ans = 0 , i = 0; 

	
	while(n!= 0){
		int bit = n%10;
        if(bit){
        ans =(bit * pow(2,i)) + ans; }
		n = n/10;
		i++;
	}
	return ans;
}

int main()
{

	int n ;
	cout<<"enter the number ";
	cin>>n;

	cout<<De(n);
 return 0;
}