#include <stdio.h>

int main()
{
    char str1[20]="abcd", str2[20]="1234", *p = str1,n = 0;
    while (*p++ != '\0');/*�ƶ�ָ�뵽str1β*/
    --p;//����һ����Ԫ���Ա㸲��str1ĩ��'\0p;//����һ����Ԫ���Ա㸲��str1ĩ��'\0'
    while (str2[n] != '\0')
    {
        *p++ = str2[n];//��str2�ӵ�str1ĩ
        ++n;
    };
    *p = '\0';//ƴ����ɣ��ֶ�Ϊstr1ĩ���Ͻ������
    printf("���Ϊ:\n%s\n\n",str1);
    return 0;
}
