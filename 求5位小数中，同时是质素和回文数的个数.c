//��5λ�����У������������ǻ������ĸ��� 
#include <stdio.h>
int main()
{
    int i,j,ge,shi,qian,wan,flag,count;
    for (i = 10000; i <= 99999; i++)
    {//��ȡÿһ��5λ����Ȼ��õ����ĸ�λ��ʮλ��ǧλ����λ
       	ge = i%10;	
		shi = i/10%10;
		qian = i/10/10/10%10;
		wan = i/10/10/10/10%10;
        flag = 1;
        if ((ge==wan) && (shi==qian))//�������������������
        {//�ж��Ƿ�Ϊ���� 
            for (j = 2; j * j < i; j++)
                if (i % j == 0)
                {
                    flag = 0;
                    break;   
                }
            if (flag){
            	printf("%d\t", i);
                count++;
			}    
        }
    }
    printf("�ܼ�%d", count);
    printf("\n");
}
