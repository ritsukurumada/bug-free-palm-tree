#include <stdio.h>

int main()
{
    int k;
    printf("How tall is the building?");
    scanf("%d", &k);
    
    int j;
    printf("How many pancake?");
    scanf("%d", &j);
    
    printf("The height of building is %d", k);
    
    printf("The building is %d tall and there are %d pancakes", k, j);
    
    return 0;
    
}