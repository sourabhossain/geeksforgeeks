#include <stdio.h>

int main()
{
    int testCase;

    scanf("%d", &testCase);

    while(testCase--) {
        int n;

        scanf("%d", &n);

        int maxValue = -1000, temp;

        while(n--) {
            scanf("%d", &temp);

            if(maxValue < temp) {
                maxValue = temp;
            }
        }

        int minValue = 1000;

        scanf("%d", &n);

        while(n--) {
            scanf("%d", &temp);

            if(minValue > temp) {
                minValue = temp;
            }
        }

        printf("%d\n", maxValue * minValue);
    }

	return 0;
}
