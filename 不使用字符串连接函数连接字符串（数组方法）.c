//char s1[20]="abcd";
//char s2[20]="1234;
#include <stdio.h>
main(){
	int i,j; 
	char s1[20]="abcd";
	char s2[20]="1234";
    for(i = 0; s1[i] != '\0'; ++i); /*�ƶ���s1β*/
    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];//��s2�ӵ�s1ĩ
    }
    s1[i] = '\0';//ƴ����ɣ��ֶ�Ϊs1ĩ���Ͻ������
    printf("���Ӻ�: %s", s1);
	return 0;
} 
