// ����һ������ ����Ǽ�λ��
#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        count = 1;
        printf("%d", count);
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            count++;
        }
        printf("%d", count);
    }
	return 0; 
}
