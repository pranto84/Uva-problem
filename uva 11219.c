#include <stdio.h>
int main()
{
    int tcase, i, ddc, mmc, yyc, ddb, mmb, yyb, age, dd, mm;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d/%d/%d", &ddc, &mmc, &yyc);
        scanf("%d/%d/%d", &ddb, &mmb, &yyb);
        printf("Case #%d: ", i);
        age = yyc - yyb;
        mm = mmc - mmb;
        dd = ddc - ddb;
        if( age > 0){
            if(mm < 0)
                age = age - 1;
            else if( mm == 0){
                if(dd < 0)
                    age = age - 1;
                else
                    age = age;
            }
        }
        else if(age == 0) {
            if(mm < 0){
                age = age - 1;
            }
            else if(mm == 0){
                if(dd < 0)
                     age = age - 1;
            }
        }
        if(age > 130)
            printf("Check birth date");
        else if(age < 0)
            printf("Invalid birth date");
        else
            printf("%d", age);
        printf("\n");
    }
    return 0;
}
