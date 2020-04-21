#include<iostream>
int main()
{
	float eps = 0.0000001;  //定义0的精度
	float fvar=0.00001;
	if (fvar>=-eps&&fvar<=eps) //超出精度 
	   printf("等于零!\n",fvar); 
	else
	   printf("不等于零!\n",10); 
	return 0;
}
