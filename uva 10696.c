#include <stdio.h>
int main()
{
    int number;
    while(scanf("%d", &number) && number != 0){
       if(number <= 100)
        printf("f91(%d) = 91\n", number);
       else if(number >= 101)
        printf("f91(%d) = %d\n", number, number-10);
    }
    return 0;
}
