#include <stdio.h>
#include "base_reloaded.h"

void	ft_putchar(char ch);
void	ft_foreach(int *, int, void (*)(int));
void	ft_putnbr(int nb);
int 	ft_is_digit(char *ch)
{
	if (ch[0] == '\0')
		return (0);
	for (int i=0; ch[i] != '\0'; ++i)
		if (!(ch[i] >= '0' && ch[i] <= '9'))
			return (0);
	return (1);
}

int main()
{
	printf("----------  ex25/ft_foreach\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("-5 0 1 42\n");
	int tab1[] = {-5, 0, 1, 42};
	ft_foreach(tab1, 4, &ft_putnbr);
	printf("\n");

	printf("\x1b[38:5:11mTest_2:\x1b[0m\n");
	printf("64876 -163114 209883 -109901 348221\n");
	int tab2[] = {64876, -163114, 209883, -109901, 348221};
	ft_foreach(tab2, 5, &ft_putnbr);
	printf("\n");

	printf("\x1b[38:5:11mTest_3:\x1b[0m\n");
	printf("2147483647 -2147483648\n");
	int tab3[] = {2147483647, -2147483648};
	ft_foreach(tab3, 2, &ft_putnbr);
	printf("\n");

	printf("\n----------  ex26/ft_count_if\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	char *s1[] = {"f00", "bar", "b4z!", NULL};
	printf("0\n");
	printf("%d\n", ft_count_if(s1, &ft_is_digit));

	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	char *s2[] = {"f0o", "b4r", "baz", "321", NULL};
	printf("1\n");
	printf("%d\n", ft_count_if(s2, &ft_is_digit));

	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	char *s3[] = {"S8T", "j0", "42", "D2ICbJBEe", "5xC7E2aQiN1", "tVI4Sb1L", "2R9", "QaKtmAD", "qR1Ls", "BtUjYd7fQ4y", "Yw", "8fpu2XZI", NULL};
	printf("1\n");
	printf("%d\n", ft_count_if(s3, &ft_is_digit));

	printf("\n\x1b[38:5:11mTest_4:\x1b[0m\n");
	char *s4[] = {"", NULL};
	printf("0\n");
	printf("%d\n", ft_count_if(s4, &ft_is_digit));

	printf("\n\x1b[38:5:11mTest_5:\x1b[0m\n");
	char *s5[] = {"LfCK", "9z", "A", NULL};
	printf("0\n");
	printf("%d\n", ft_count_if(s5, &ft_is_digit));

	printf("\n\x1b[38:5:11mTest_6:\x1b[0m\n");
	char *s6[] = {"42", "LfCK", "9", "A", "843264", "-4312", NULL};
	printf("3\n");
	printf("%d\n", ft_count_if(s6, &ft_is_digit));


	return (0);
}
