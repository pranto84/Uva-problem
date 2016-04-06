#include <stdio.h>
#include <string.h>
int stock;
int hangman(char a[1001], char b[1001])
{
    int i, j, len1, len2, cnt = 0, temp;
    len1 = strlen(a);
    len2 = strlen(b);
    stock = 0;
    for(i = 0; i < len2; i++){
        temp = 0;
        if(stock == 7)
            break;
        for( j = 0; j < len1; j++){
            if(b[i] == a[j]){
                a[j] = '1';
                cnt++;
                temp = 1;
            }
        }
        if(temp == 0)
            stock++;
    }
    return cnt;
}
int main()
{
    int tcase, cnt;
    char correct[1001], guess[1001];
    while(scanf("%d", &tcase) == 1){
        if( tcase == -1)
            break;
        scanf("%s %s", correct, guess);
        cnt = hangman(correct, guess);
        printf("Round %d\n", tcase);
        if(cnt == strlen(correct))
            printf("You win.\n");
        else if(stock == 7)
            printf("You lose.\n");
        else
            printf("You chickened out.\n");
    }
    return 0;
}
