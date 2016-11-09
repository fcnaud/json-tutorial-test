#include <stdlib.h>
#include <stdio.h>

typedef enum { e1, e2, e3 } myType;

int main()
{
    printf("%d %d %d\n", e1, e2, e3);
    myType mytype = e2;
    printf("%d\n", mytype);
    return 0;
}
