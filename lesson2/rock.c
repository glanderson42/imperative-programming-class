#include <stdio.h>
#include <string.h>

int main() {
    char player_one[50];
    char player_two[50];
    
    printf("Player one choice: ");
    scanf("%49s", player_one);
    printf("Player two choice: ");
    scanf("%49s", player_two);

    if(strcmp(player_one, player_two) == 0) {
        printf("Draw!\n");
        return 0;
    }
    
    if((strcmp(player_one, "rock") == 0) && )
}
