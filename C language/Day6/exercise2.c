// km to miles ;
// inches to foot
#include <stdio.h>
int main()
{
    char input;
    float first, second;
    float kmtomiles = 0.621371;
    float inchestofoot = 0.0833333;

    while (1) //---->makes te loop running
    {
        printf("Select the operation :- q. to quit \n 1.km to miles\n2.inches to foot\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
            printf("Quiting the operation....");
            goto end;
        case '1':
            printf("Enter the num:");
            scanf("%f",&first);
            second = first * kmtomiles;
            printf("%f km  =  %f miles", first, second);
            goto end;

        case '2':
            printf("Enter the num:");
            scanf("%f",&first);
            second = first * inchestofoot;
            printf("%f inches  =  %f foot", first, second);
            goto end;

        default:
            break;
        }
    }
end:

    return 0;
}