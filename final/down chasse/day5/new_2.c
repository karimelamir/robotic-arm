#include <stdio.h>
#include "new_1.c"

#define SET_BIT(Var,BitNo)    Var |=  (1 << (BitNo))
#define CLR_BIT(Var,BitNo)    Var &= ~(1 << (BitNo))
#define TOG_BIT(Var,BitNo)    Var ^=  (1 << (BitNo))

void main(void)
{
	u32 x = 5;
	
	printf("Original value of x is %d\n",x);
	
	
	/* Toggle first bit */
	TOG_BIT(x,0);
	printf("x value after toggling first bit is %d\n",x);
}