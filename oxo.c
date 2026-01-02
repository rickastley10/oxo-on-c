#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a1[9] = "1", a2[9] = "2", a3[9] = "3", a4[9] = "4", a5[9] = "5", a6[9] = "6", a7[9] = "7", a8[9] = "8", a9[9] = "9";


    while (1)
    {
        
    
    
        printf("\noxo\n");
        
        
        printf("%s|%s|%s\n", a1, a2, a3);
        printf("-----\n");
        printf("%s|%s|%s\n", a4, a5, a6);
        printf("-----\n");
        printf("%s|%s|%s\n", a7, a8, a9);

        printf("\nwhere to place what?\nq to quit\n> ");
        char num[9] = "";
        scanf("%8s", num);
        if (strcmp(num, "1") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a1);  
        }
        else if (strcmp(num, "2") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a2);
        }
        else if (strcmp(num, "3") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a3);
        }
        else if (strcmp(num, "4") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a4);
        }
        else if (strcmp(num, "5") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a5);
        }
        else if (strcmp(num, "6") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a6);
        }
        else if (strcmp(num, "7") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a7);
        }
        else if (strcmp(num, "8") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a8);
        }
        else if (strcmp(num, "9") == 0) {
            printf("\nwhat to place?\n x / o\n>");
            scanf("%8s", a9);
        }
        else if (strcmp(num, "q")==0){
            return 0;
        }
    }

}
