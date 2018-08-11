#include <stdio.h>
#include <math.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    while(testCase--) {
        int inputValue;

        scanf("%d", &inputValue);

        long long temp = (long long) pow(inputValue, 3);

        while(inputValue) {
            if((inputValue % 10) != (temp % 10)) {
                puts("0");
                break;
            }

            inputValue /= 10;
            temp /= 10;
        }

        if(inputValue == 0) {
            puts("1");
        }
    }

	return 0;
}
