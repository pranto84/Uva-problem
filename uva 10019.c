#include <stdio.h>
int find_binary(int num)
{
    int c = 0, binary[100], i, temp, j = 0;
    temp = num;
    while(temp != 0){
        binary[j++]=temp % 2;
        temp = temp/2;
    }
    for(i=0; i<j; i++){
        if(binary[i] == 1)
            c++;
    }
    return c;
}
int find_hexadecimal(num)
{
    int hex_bin[]= {0, 1, 1, 2, 1, 2, 2, 3, 1, 2};
    int temp, rem, c = 0;
    while(num != 0){
      temp = num % 10;
      num = num / 10;
      c = c + hex_bin[temp];
    }
    return c;
}
int main()
{
    int num, tcase, i, bin, hex;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d", &num);
        bin = find_binary(num);
        hex = find_hexadecimal(num);
        printf("%d %d\n", bin, hex);
    }
    return 0;
}
