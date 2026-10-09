#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int p, c;
    int ps = 0, cs = 0;
    int p1, p2;
    int ps1 = 0, ps2 = 0;
    int mode;
    int r = 1;

    srand(time(0));

    printf("     _     _      ___   _  __    _  _   _     ___    ___   __   __\n");
    printf("  _ | |   /_\\    / __| | |/ /   | \\| | ( )   | _ \\  / _ \\  \\ \\ / /\n");
    printf(" | || |  / _ \\  | (__  | ' <    | .` | |/    |  _/ | (_) |  \\ V / \n");
    printf("  \\__/  /_/ \\_\\  \\___| |_|\\_\\   |_|_|       |_|    \\___/    |_|  \n");
    
    printf("\nChoose a mode:\n");
    printf("1. Player vs Player\n");
    printf("2. Player vs Computer\n");
    printf("3. More\n");
    printf("\nEnter: ");
    scanf("%d", &mode);
    getchar(); 
    system("cls");


    if (mode == 1) {

         
         while (ps1 < 3 && ps2 < 3) {
        
            printf("         Round: %d           ", r);

            printf("\n===========================\n");
            printf("        SCORE BOARD        ");
            printf("\n   Player 1: %d\tPlayer 2: %d   ", ps1, ps2);
            printf("\n===========================\n");


            do {
                printf("\n=====================\n");
                printf(" CHOOSE YOUR FIGHTER ");
                printf(" \n1: Rock             ");
                printf(" \n2: Paper            ");
                printf(" \n3: Scissors         ");
                printf("\n=====================\n");
                printf("P1: ");
                scanf("%d", &p1);
                getchar();
                system("cls");

                 printf("         Round: %d           ", r);

                printf("\n===========================\n");
                printf("        SCORE BOARD        ");
                printf("\n   Player 1: %d\tPlayer 2: %d   ", ps1, ps2);
                printf("\n===========================\n");


                printf("\n=====================\n");
                printf(" CHOOSE YOUR FIGHTER ");
                printf(" \n1: Rock             ");
                printf(" \n2: Paper            ");
                printf(" \n3: Scissors         ");
                printf("\n=====================\n");
                printf("P2: ");
                scanf("%d", &p2);
                getchar();
                system("cls");

                if (p1<1 || p2>3 || p2<1 || p2>3) {
                    printf("\nInvalid entry.\n");
                }
            } while (p1<1 || p1>3 || p2<1 || p2>3);
            
            printf("\nPlayer 1: ");
            switch(p1) {
                case 1: printf("Rock"); break;
                case 2: printf("Paper"); break;
                case 3: printf("Scissor"); break;
            }

            printf("\nPlayer 2: ");
            switch(p2) {
                case 1: printf("Rock"); break;
                case 2: printf("Paper"); break;
                case 3: printf("Scissor"); break;
            }

            if (p1==p2){
                printf("\n\nIt's a tie!");
            } else if ((p1==1 && p2==3) || (p1==2 && p2==1) || (p1==3 && p2==2)) {
                printf("\n\nPlayer 1 win this round!");
                ps1++;
            } else {
                printf("\n\nPlayer 2 win this round!");
                ps2++;
            }

            printf("\n===========================\n");
                printf("        SCORE BOARD        ");
                printf("\n   Player 1: %d\tPlayer 2: %d   ", ps1, ps2);
                printf("\n===========================\n");

            printf("\nPress 'Enter' to proceed to the next round...");
            getchar();
            getchar(); 
            system("cls");
            r++;
         }

         printf("\n===========================\n");
            printf("        SCORE BOARD        ");
            printf("\n   You: %d\tComputer: %d   ", ps1, ps2);
            printf("\n===========================\n");

         if (p1==3){
            printf("\n\nTHE WINNER IS PLAYER 1!");
         } else {
            printf("\n\nTHE WINNER IS PLAYER 2!");
         }
        
    }
    


    if (mode == 2) {

        printf("\nGame Rules:\n-Rock smashes scissors.\n-Paper covers rock.\n-Scissors cut paper.\n");
        printf("\nPrepare to battle!\n");
        printf("\nHit Enter and let the battle begin!");
        getchar();
        system("cls");

        

        while (ps < 3 && cs < 3) {

            printf("         Round: %d           ", r);

            printf("\n===========================\n");
            printf("        SCORE BOARD        ");
            printf("\n   You: %d\tComputer: %d   ", ps, cs);
            printf("\n===========================\n");

            do {
                printf("\n=====================\n");
                printf(" CHOOSE YOUR FIGHTER ");
                printf(" \n1: Rock             ");
                printf(" \n2: Paper            ");
                printf(" \n3: Scissors         ");
                printf("\n=====================\n");
                printf("Your choice: ");
                scanf("%d", &p);

                if (p < 1 || p > 3) {
                    printf("\nInvalid entry.\n");
                }
            } while (p < 1 || p > 3);

            c = (rand() % 3) + 1;

            printf("\nYou: ");
            switch (p) {
                case 1: printf("Rock"); break;
                case 2: printf("Paper"); break;
                case 3: printf("Scissors"); break;
            }

            printf("\nComputer: ");
            switch (c) {
                case 1: printf("Rock"); break;
                case 2: printf("Paper"); break;
                case 3: printf("Scissors"); break;
            }

            if (p == c) {
                printf("\n\nIt's a tie!\n");
            } else if ((p == 1 && c == 3) || (p == 2 && c == 1) || (p == 3 && c == 2)) {
                printf("\n\nYou win this round!\n");
                ps++;
            } else {
                printf("\n\nComputer wins this round!\n");
                cs++;
            }

            printf("\nPress 'Enter' to proceed to the next round...");
            getchar();
            getchar(); 
            system("cls");
            r++;
        }

        printf("\n===========================\n");
        printf("        SCORE BOARD        ");
        printf("\n   You: %d\tComputer: %d   ", ps, cs);
        printf("\n===========================\n");

        if (ps == 3) {
            printf("CONGRATULATIONS! YOU WIN!\n");
        } else {
            printf("GAME OVER! COMPUTER WINS!\n");
        }
    }

    else {
        printf("In partial fulfillment of the requirements for Computer Programming 1.\n\n");
        printf("                    Caraig, Kurt John P.                              \n");
        printf("                  Faulve, Mhyco Gabrielle                             \n");
        printf("                    Lanip, Francheska T.                              \n");
    }

    return 0;
}
