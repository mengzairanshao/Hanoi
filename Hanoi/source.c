#include <stdio.h>
/*
 * 要想将x针上的盘子全部移动到z上,必须
 * 将x上的除了最大的盘子之外的所有的盘子
 * 从大到小(大在下小在上)放到y上,然后重复
 * 以上步骤,注意此时剩下的盘子都在y上.
 */
int num = 0;
//将第n个盘子从x通过y移动到z
void hanoi(int n,char x,char y,char z)
{
	if(1==n)
	{
		printf("%c-->%c\n", x, z);
		num++;
	}
	else
	{
		hanoi(n-1, x, z, y);	//将第n-1个盘子由x通过z移动到y上
		printf("%c-->%c\n", x, z);
		num++;
		hanoi(n-1, y, x, z);	//将第n-1个盘子由y通过x移动到z上
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