#include<iostream>
using namespace std;
int main(){
	cout<<"Hello world!"<<endl;
	
	cout<<"Hello" //以下都是和 cout<<"Hello world!"的同样效果不同写法 
	<<" "
	<<"World!"
	<<endl;
	
	cout<<"Hello";
	cout<<" ";
	cout<<"World!"; 
	cout<<endl;
	return 0;
}
