#include <stdio.h>    // ��һ�������ַ���ת��Ϊһ��������
int main()
{
    char* numStr = "4562";
    int value=0;
    while( *numStr >= '0' && *numStr <= '9' ){ // ������ַ������ַ�ת��Ϊ���֡�
        value *= 10;
        value += *numStr - '0';
        numStr++;
    }
    printf("%d\n",value); 
    return 0;
}
