#include <stdio.h>

int main()
{
    int mac1[][3]={{1,2,3},{1,2,3},{1,2,3}};
    int mac2[][3] = {{1,2,3},{1,2,3},{1,2,3}};

    int size = sizeof(mac1)/sizeof(mac1[0]);
    int mac3[size][3];

    for(int i = 0;i<size;++i)
    {
        for(int j = 0;j<3;++j)
        {
            mac3[i][j]=mac1[i][j]+mac2[i][j];
        }
    }

    for(int i = 0;i<size;++i)
    {
        for(int j = 0; j<3; ++j)
        {
            if(j<=2)
            {
                printf(" %d",mac3[i][j]);
            }
            else
            {
                printf(" %d\n",mac3[i][j]);
            }
        }
    }

    return 0;
}
