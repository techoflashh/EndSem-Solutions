#include <stdio.h>
#include <string.h>
int main(){
    int no_of_cases;
    scanf("%d",&no_of_cases);
    for (int e=0;e<no_of_cases;e++){
        char str[1000000];
        int count = 0; 
        scanf("\n");
        scanf("%[^\n]",str);
        for (int i=0;i<strlen(str);i++){
            if (str[i]>=65 && str[i]<=90){
                count++;
            }
        }
        printf("%d\n",count);
        count = 0;
    }
    return 0;
}
