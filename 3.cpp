#include<iostream>
int main()
{
	float eps = 0.0000001;  //����0�ľ���
	float fvar=0.00001;
	if (fvar>=-eps&&fvar<=eps) //�������� 
	   printf("������!\n",fvar); 
	else
	   printf("��������!\n",10); 
	return 0;
}
