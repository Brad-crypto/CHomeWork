/*��д������ȥ��һ���ַ����г�ͷ����β���ո�������пո񣬲���д���������е��ò��ԡ�
���룺
ռһ�У�ע��������ַ������Ȳ��ᳬ��80��
�����
ռһ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

char* DelCharBtweenStr(char* str, int i, int j, char delch);

int main()
{
    char inputStr[100];
    gets(inputStr);
    //���ַ�����ߵ�һ���ǿո��ַ�
    int i = 0;
    while (inputStr[i] && inputStr[i] == ' ')
    {
        i++;
    }

    //���ַ����ұߵ�һ���ǿո��ַ�
    int j = strlen(inputStr) - 1;
    while (inputStr[j] && inputStr[j] == ' ')
    {
        j--;
    }
    printf("%s", DelCharBtweenStr(inputStr, i, j,' '));
    return 0;
}

char* DelCharBtweenStr(char* str, int i, int j, char delch)
{
    //ɾ��i��j֮�������ַ���
    while (j >= i)
    {
        if (str[j] == delch)
        {
            int n = j;
            while (str[n])
            {
                str[n] = str[n + 1];
                n++;
            }
            str[n] = 0;
        }
        j--;
    }
    return str;
}