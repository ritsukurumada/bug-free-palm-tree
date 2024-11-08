#include <stdio.h>

int main()
{
    int k;
    printf("どんぐらい食った?");
    scanf("%d",&k);
    if (k >= 15)
    {
        printf("いっぱい食ってけ");
    }
    else if(k>=10)
    {
        printf("いい感じだね");
    }
    else
    {
        printf("もっとパンケーキを食べろ");
    }
    return 0;
}