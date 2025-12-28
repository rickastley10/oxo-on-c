#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a1[] = "1", a2[] = "2", a3[] = "3", a4[] = "4", a5[] = "5", a6[] = "6", a7[] = "7", a8[] = "8", a9[] = "9";


    while (1)
    {
        
    
    
        printf("\noxo\n");
        
        
        printf("%s|%s|%s\n", a1, a2, a3);
        printf("-----\n");
        printf("%s|%s|%s\n", a4, a5, a6);
        printf("-----\n");
        printf("%s|%s|%s\n", a7, a8, a9);
        char num[] = "";
        scanf("%s", num);
        if (strcmp(num, "1") == 0) {
            scanf("%s", a1);  
        }
        else if (strcmp(num, "2") == 0) {
            scanf("%s", a2);
        }
        else if (strcmp(num, "3") == 0) {
            scanf("%s", a3);
        }
        else if (strcmp(num, "4") == 0) {
            scanf("%s", a4);
        }
        else if (strcmp(num, "5") == 0) {
            scanf("%s", a5);
        }
        else if (strcmp(num, "6") == 0) {
            scanf("%s", a6);
        }
        else if (strcmp(num, "7") == 0) {
            scanf("%s", a7);
        }
        else if (strcmp(num, "8") == 0) {
            scanf("%s", a8);
        }
        else if (strcmp(num, "9") == 0) {
            scanf("%s", a9);
        }
    }

}
