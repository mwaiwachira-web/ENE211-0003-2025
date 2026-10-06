#include <stdio.h>
#include <stdlib.h>

int main()
{   int correctpin = 9999;
    int UserPin;
    int accessGranted = 0;
    // capture pin
    for(int attempts=1;attempts<=3;)
    {
        printf("Enter UserPin\n");
        scanf("%d", &UserPin);
        if (UserPin<1000||UserPin>9999)
        {
            printf("Please enter a 4 digit password\n");
        }
        else
        {
            attempts++;


            if  (UserPin == correctpin)
            {
                printf("Access Granted");
                accessGranted = 1;
                break;
            }
            else
            {
                printf("Access Denied\n");
            }
        }
    }
    if(accessGranted == 0)
    {
        printf("System Locked");
    }
    return 0;
}
