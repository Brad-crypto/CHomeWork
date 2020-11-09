/*���һ�������е�ĳһ�Σ�����������Ԫ�أ��ĸ�Ԫ��ֵ����ͬ�����֮Ϊ��ֵ���жΡ�
��ֵ���ж���Ԫ�صĸ���������ֵ���жεĳ��ȡ�
���룺
���г���N��N������������1 <= N <= 50), �Կո������
�����
�����г������ĵ�ֵ���жε�ʼĩ�±꣨0��N - 1������Ӣ�Ķ��ŷָ������û�е�ֵ���жΣ������NO.
˵����
����ж��ͬ�ȳ��ȵĵ�ֵ���У�ֻ�����һ����ֵ���е���ֹ�±ꡣ
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[100];
	int n;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &a[i]);
	}

	int maxStart = 0;
	int maxEnd = 0;
	int maxLength = 0;
	int start = 0;
	int end = 0;
	int length = 0;

	int i = 0;
	while (i < n)
	{
		start = i;
		end = i + 1;
		while (a[start] == a[end] && end < n)
		{
			end++;
		}

		if (end - start > 1)
		{
			length = end - start;
			if (length > maxLength)
			{
				maxStart = start;
				maxEnd = end - 1;
				maxLength = length;
			}
		}
		i = end;
	}

	maxLength == 0 ? printf("NO") : printf("%d,%d", maxStart, maxEnd);
	return 0;
}