#include <stdio.h>

#include "arith.h"

int main(int argc, char *argv[])
{
    int max = Arith_max(10, 20);
	printf("max is: %d\n", max);
    return 0;
}