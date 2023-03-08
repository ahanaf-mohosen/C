#include <stdio.h>

int main() {
    int i, j, k, l;
    int count = 0;
    for (i = 1; i <= 9; i++) 
    {
        for (j = 0; j <= 9; j++) 
        {
            if (j == i) 
            continue;
            for (k = 0; k <= 9; k++) 
            {
                if (k == i || k == j) 
                continue;
                for (l = 0; l <= 9; l++) 
                {
                    if (l == i || l == j || l == k) 
                    continue;
                    printf("%d%d%d%d\n", i, j, k, l);
                    count++;
                }
            }
        }
    }
    printf("Total = %d",count);
    return 0;
}
