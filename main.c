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
            printf("注射剂量选择:%.2f /%d ml\n",times[j],a);
            printf("注射次数选择: %d 次\n",i);
            printf("则单次注射剂量为%.4f ml\n",value);
            num++;
            i+=10;
        }
        printf("\n");
    }
    printf("总共组合为 %d 种\n",num);
    return 0;

}
/*思路，通过遍历存放注射计量的数组。然后以此循环判断每一个计量不同注射次数的平均值*/
