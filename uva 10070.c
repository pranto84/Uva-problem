#include <stdio.h>
#include <string.h>
int main()
{
    char year[1001];
    int len, i;
    int flag = 0;
    int rem4, rem15, rem55, rem100, rem400;
    while(scanf("%s", year) == 1){
        if(flag != 0)
            printf("\n");
        flag = 1;
        len = strlen(year);
        rem4 =0;
        rem15 = 0;
        rem55 = 0;
        rem100 = 0;
        rem400 = 0;
        for(i=0; i<len; i++){
            rem4 = (rem4*10 + (year[i]-'0')) % 4;
            rem15 = (rem15*10 + (year[i]-'0')) % 15;
            rem55 = (rem55*10 + (year[i]-'0')) % 55;
            rem100 = (rem100*10 + (year[i]-'0')) % 100;
            rem400 = (rem400*10 + (year[i]-'0')) % 400;
        }
        int leap = 0;
        int temp = 0;
        if( (rem4 == 0 && rem100 != 0) || rem400 == 0 ){
            printf("This is leap year.\n");
            temp = 1;
            leap = 1;
        }
        if(rem15 == 0){
            printf("This is huluculu festival year.\n");
            temp = 1;
        }
        if(rem55 == 0 && leap == 1)
            printf("This is bulukulu festival year.\n");
        if(temp == 0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
