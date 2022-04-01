#include <stdio.h>
#include <stdlib.h>
#include "base_reloaded.h"
#include "ft_point.h"

void	ft_putchar(char ch);

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main()
{
	printf("----------  ex20/ft_strdup\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	char *str = "foo";
	char *p = ft_strdup(str);
	printf("Original string:   %s --> (%p)\n", str, str);
	printf("Duplicated string: %s --> (%p)\n", p, p);
	free(p);


	printf("\n----------  ex21/ft_range\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	int *r1;
	r1 = ft_range(1, 5);
	if (r1)
	{
		printf("1, 2, 3, 4\n");
		for (int i=0; r1[i]; ++i)
			printf("%d, ", r1[i]);
	}
	else
		printf("1, 2, 3, 4\n(NULL)\n");
	free(r1);

	printf("\n\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	int *r2;
	r2 = ft_range(-5, -3);
	if (r2)
	{
		printf("-5, -4\n");
		for (int i=0; r2[i]; ++i)
			printf("%d ", r2[i]);
	}
	else
		printf("-5, -4\n(NULL)");
	free(r2);

	printf("\n\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	int *r3;
	r3 = ft_range(1, 1);
	if (r3)
	{
		printf("(NULL)");
		for (int i=0; r3[i]; ++i)
			printf("%d ", r3[i]);
	}
	else
		printf("(NULL)\n(NULL)\n");
	free(r3);

	printf("\n\x1b[38:5:11mTest_4:\x1b[0m\n");
	int *r4;
	r4 = ft_range(5, 1);
	if (r3)
	{
		printf("(NULL)");
		for (int i=0; r4[i]; ++i)
			printf("%d ", r4[i]);
	}
	else
		printf("(NULL)\n(NULL)\n");
	free(r4);

	printf("\n----------  ex22/ft_abs.h\n");
	#include "ft_abs.h"

	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("0\n");
	printf("%d\n", ABS(0));

	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	printf("42\n");
	printf("%d\n", ABS(42));

	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	printf("42\n");
	printf("%d\n", ABS(-42));

	printf("\n----------  ex23/ft_point.h\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	t_point point;
	set_point(&point);
	printf("point(42, 21)\n");
	printf("point(%d, %d)\n", point.x, point.y);

	return (0);
}
