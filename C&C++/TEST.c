// 개구리의 우물 탈출 프로그램
#include <stdio.h>

int main(void)
{
    int height;
    int days;

    height=0;
    days=0;

    height = height + 55;

    while(height < 300) {
        height = height -13;
        days = days + 1;
        height = height +55;
    }

    printf ("며칠 결렸습니까? \n");
    printf ("%d일입니다. \n", days);
    
    return 0;
}