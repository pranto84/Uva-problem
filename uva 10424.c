#include <stdio.h>
#include <string.h>
int lovecalculator(char str[1001]);
int main()
{
    int sum1, sum2;
    char name1[1001], name2[1001];
    while( gets(name1) ){
        gets(name2);
        sum1 = lovecalculator(name1);
        sum2 = lovecalculator(name2);
        if(sum2 > sum1){
            int temp = sum1;
            sum1 = sum2;
            sum2 = temp;
        }
        double result = (double) sum2 / (double) sum1;
        result = result * 100;
        printf("%.2lf %%\n", result);
    }
    return 0;
}
int lovecalculator(char str[1001])
{
    int len, i, sum = 0, value, rest;
    len = strlen(str);
    for(i = 0; i < len; i++){
        str[i] = toupper(str[i]);
        if(str[i] >= 'A' && str[i] <= 'Z'){
            sum += (str[i] - 64);
            }
        }
    while( sum >= 10){
        value = sum;
        sum = 0;
        while( value != 0){
            rest = value % 10;
            sum += rest;
            value = value / 10;
        }
    }
    return sum;
}
