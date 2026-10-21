#include <iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<"lower case alphabate";
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<"upper case alphabate";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"numeric value";
	}
	else 
	{
		cout<<"special character";
	}
}
