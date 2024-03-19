#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("title 정수 2개 입력 후 값 출력");

    int num;
    int unm;
    int c; 
    printf("1.정수 입력: ");
    scanf_s("%d", &num);
    printf("2.정수 입력: ");
    scanf_s("%d", &unm);
    c = num + unm;
    printf("%d + %d = %d\n\n",unm,num,c );
    c = num - unm;
    printf("%d - %d = %d\n\n",unm,num,c );
    c = num / unm;
    printf("%d / %d = %d\n\n",unm,num,c );
    c = num * unm;
    printf("%d * %d = %d\n",unm,num,c );
    return 0;
}
