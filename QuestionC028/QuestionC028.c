/*��������n����������(1��n����)�ĺ͡�
���磺n = 20ʱ������Ϊ2��4��5��10 �����ǵĺ�Ϊ21�����������Ӻ�Ϊ0��
���룺������n��
�������1�ͱ���֮������ӵĺͣ�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	int sum = 0;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}