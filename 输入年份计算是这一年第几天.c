// ������ݼ�������һ��ڼ���
#include <stdio.h>
main()
{
    struct date
    {
        int y;
        int m;
        int d;
    };
    struct date dt;
    int i, count, mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("�������� �� �գ�");
    scanf("%d%d%d", &dt.y, &dt.m, &dt.d);
    count = dt.d;
    for (i = 0; i < dt.m; i++)//�ۼ����� 
    {
        count += mon[i];
    }
    if (dt.m > 2 && (dt.y % 4 == 0 && dt.y % 100 != 0 || dt.y % 400 == 0))//�ж��Ƿ�Ϊ���� ����+1���� 
    {
        count += 1;
    }
    printf("��һ������һ��ĵ�%d��\n", count);
	return 0;
}
