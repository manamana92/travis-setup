#include <stdio.h>
int main(){
    int selection = -1;
    printf("Select Function or Macro (Enter 0 to exit)");
    printf("\n1. Dice Roller");
    printf("\n2. Surface Area Calculator");
    printf("\n3. Cube Volume");
    printf("\n4. My Unique Function\n");
    while(selection != 0){
        scanf("%d", &selection);
        switch(selection){
            case 1:
                printf("\nYou Selected 1\n");
                break;
            case 2:
                printf("\nYou Selected 2\n");
                break;
            case 3:
                printf("\nYou Selected 3\n");
                break;
            case 4:
                printf("\nYou Selected 4\n");
                break;
            case 0:
                printf("\nExiting...\n");
                return 0;
            default:
                printf("\nInvalid Entry\n");
                break;
        }
    }
}
