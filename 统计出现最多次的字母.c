#include <stdio.h>
int main(){
	//�����洢������ַ���
	char str[10],ch = 0;
	int count[256] = {0},i,max = -1;
	printf("�����ַ�����\n");
	scanf("%s", str);
	for(i=0; str[i]; i++) 
	    count[str[i]]++;
	    //��ʼ����Ӧ256���ַ���ASCIIֵ��
	for(i=0; i<256; i++){
		if(count[i] > max){
			max = count[i];
			ch = (char)i;
		}
	}
	printf("���ִ��������ǣ�%c", ch);
	return 0;
}
