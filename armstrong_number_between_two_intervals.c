#include <stdio.h>
#include <math.h>

int main()
{
    int number=0, start, end, originalNumber, remainder, result = 0, n = 0 ;
    scanf("%d %d", &start, &end);
    for(number=start+1;number<end;number++){
        result = 0;
        n = 0;
    originalNumber = number;
    while (originalNumber != 0){
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    while (originalNumber != 0){
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    if(result == number)
        printf("%d ", number);
    }
    return 0;
}
