#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun(float a)
{

    if(a<1)
    {
       return 1;
    }
    else if(1<a&&a<=3)
    {
        return 3;
    }
    else
    {
        return 5;
    }
}

int main()
{

    float times[5]={0.8,2.0,3.0,4.0,5.0};
    int num=0;
    float value;
    for(int j=0;j<5;j++)
    {
        int a=fun(times[j]);
        int i=10;
        while(i<=180)
        {
            value=times[j]/i;
            printf("ע�����ѡ��:%.2f /%d ml\n",times[j],a);
            printf("ע�����ѡ��: %d ��\n",i);
            printf("�򵥴�ע�����Ϊ%.4f ml\n",value);
            num++;
            i+=10;
        }
        printf("\n");
    }
    printf("�ܹ����Ϊ %d ��\n",num);
    return 0;

}
/*˼·��ͨ���������ע����������顣Ȼ���Դ�ѭ���ж�ÿһ��������ͬע�������ƽ��ֵ*/
