#include <stdio.h>
/*
 * Ҫ�뽫x���ϵ�����ȫ���ƶ���z��,����
 * ��x�ϵĳ�����������֮������е�����
 * �Ӵ�С(������С����)�ŵ�y��,Ȼ���ظ�
 * ���ϲ���,ע���ʱʣ�µ����Ӷ���y��.
 */
int num = 0;
//����n�����Ӵ�xͨ��y�ƶ���z
void hanoi(int n,char x,char y,char z)
{
	if(1==n)
	{
		printf("%c-->%c\n", x, z);
		num++;
	}
	else
	{
		hanoi(n-1, x, z, y);	//����n-1��������xͨ��z�ƶ���y��
		printf("%c-->%c\n", x, z);
		num++;
		hanoi(n-1, y, x, z);	//����n-1��������yͨ��x�ƶ���z��
	}
}
int main()
{
	int n = 0;
	printf("please input the height of the tower of hanoi: \n");
	scanf_s("%d", &n);
	hanoi(n,'X','Y','Z');
	printf("The total num is: %d \n", num);
}