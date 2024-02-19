// C program to convert seconds into Hours, Minutes and Seconds
#include<stdio.h>
#include<math.h>

int main ()
{
    int timeInSec, hh, mm, ss;
    printf("Enter time in seconds: ");
    scanf("%d", &timeInSec);
    hh = timeInSec / (60 * 60);
    mm = (timeInSec - (hh * 3600)) / 60;
    ss = timeInSec - (hh * 3600) - (mm * 60);

    printf("%d seconds = %d hours : %d minutes : %d seconds", timeInSec, hh, mm, ss);

    return 0;
}