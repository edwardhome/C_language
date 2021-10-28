#include <stdio.h>

int a = 10;
double b = 1.5;
int A = -10;
float d = -1.732;
char c[] = "APPLE";
char C ='a';

int main(void){
    printf("A輸入為-10=\t\t%d",A);
    printf("\n");
    printf("a輸入為10=\t\t%d",a);
    printf("\n");
    printf("b輸入為1.5=\t\t%f",b);
    printf("\n");
    printf("d輸入為-1.732=\t\t%f",d);
    printf("\n");
    printf("c字串輸入為Apple=\t\t%s",c);
    printf("\n");
    printf("C字元輸入為a=\t\t%c",C);
    printf("\n");
    return 0;
}