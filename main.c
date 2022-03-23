#include <stdio.h>
#include <stdlib.h>
#include "operators.h"

int main()
{

    int res;
/*
    system("cls");
        printf("                                                                       =========================\n");
        printf("                                                                      |   Opening C-CALCULATOR  |\n");
        printf("                                                                       =========================\n");
        for(int i = 0; i<=150;i++){
        char loading;
        loading+=".";
        printf("                                                                                                    %c", loading);
        Sleep(15);
    }
*/

    do{
    system("cls");
    fflush(stdin);
    printf("                                                                         ========================\n");
    printf("                                                                         ====Calculator in C!====\n");
    printf("                                                                         ========================\n\n\n\n");
    float firstValue, secondValue;
    float result;
        printf("                                                                         What do you want to do?\n");
        printf("                                                                              1->Get sum\n");
        printf("                                                                           2->Get subtraction\n");
        printf("                                                                           3->Get multiplication\n");
        printf("                                                                             4->Get division\n");
        printf("                                                                                5->Exit\n\n");
        printf("                                                                              Write here: ");
        scanf("%i", &res);

        switch(res)
        {
            case 1:
                system("cls");
                printf("                                                                    ============================\n");
                printf("                                                                   |             SUM            |\n");
                printf("                                                                    ============================\n");
                printf("                                                                   |        Input value 1:      |");
                scanf("%f", &firstValue);

                printf("                                                                   |        Input value 2:      |");
                scanf("%f", &secondValue);
                result = addition(firstValue,secondValue);
                printf("\n                                                                   |Result of %.2f + %.2f = %.2f|", firstValue, secondValue, result);
                getch();
                break;
            case 2:
                system("cls");
                printf("                                                                    ==============================\n");
                printf("                                                                   |          SUBTRACTION         |\n");
                printf("                                                                    ==============================\n");
                printf("                                                                   |         Input value 1:       |");
                scanf("%f", &firstValue);

                printf("                                                                   |         Input value 2:       |");
                scanf("%f", &secondValue);
                result = subtraction(firstValue,secondValue);
                if (result == 0){
                    printf("                                                                   |Vale '2' is already negative|");
                    getch();
                    break;
                }
                printf("\n                                                                   |Result of %.2f - %.2f = %.2f|", firstValue, secondValue, result);
                getch();
                break;
            case 3:
                 system("cls");
                printf("                                                                     ============================\n");
                printf("                                                                    |        MULTIPLICATION      |\n");
                printf("                                                                     ============================\n");
                printf("                                                                    |        Input value 1:      |");
                scanf("%f", &firstValue);

                printf("                                                                    |        Input value 2:      |");
                scanf("%f", &secondValue);
                result = multiplication(firstValue,secondValue);
                printf("\n                                                                  |Result of %.2f x %.2f = %.2f|", firstValue, secondValue, result);
                getch();
                break;
            case 4:
                system("cls");
                printf("                                                                     ============================\n");
                printf("                                                                    |           DIVISION         |\n");
                printf("                                                                     ============================\n");
                printf("                                                                    |        Input value 1:      |");
                scanf("%f", &firstValue);

                printf("                                                                    |        Input value 2:      |");
                scanf("%f", &secondValue);
                result = multiplication(firstValue,secondValue);
                printf("\n                                                                  |Result of %.2f / %.2f = %.2f|", firstValue, secondValue, result);
                getch();
                break;

        }

    }while(res!=5);

    /*system("cls");
    printf("\n");
    printf("                                                                       =============================================\n");
    printf("                                                                       |            Closing C-CALCULATOR           |\n");
    printf("                                                                       =============================================\n");*/
    for(int i = 0;i<=150;i++){
        char exit;
        exit+='         .';
        printf("                                                                                    %c",exit);
        Sleep(15);
    }
    printf("\n");
    printf("                                                                  ============================================\n");
    printf("                                                                  |            Exit successfully!            |\n");
    printf("                                                                  ============================================\n");
    getch();
    return 0;
}
