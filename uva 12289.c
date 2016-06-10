#include<stdio.h>
#include<string.h>
int main()
{
    int len,t,i;
    char str[101];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++){
        gets(str);
        len=strlen(str);
        if(len==3){
            if(str[0]=='o'){
                printf("1\n");
                continue;
            }
            else if(str[0]=='t'){
                printf("2\n");
                continue;
            }
            else{
               if(str[1]=='n'){
                printf("1\n");
                continue;
                }
                else if(str[1]=='w'){
                printf("2\n");
                continue;
                    }
            else{
                if(str[2]=='e'){
                printf("1\n");
                continue;
                    }
            else if(str[2]=='o'){
                printf("2\n");
                continue;
                    }
                }
            }
        }
    else if(len==5)
        printf("3\n");
    }
    return 0;
}
