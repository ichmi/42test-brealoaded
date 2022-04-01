#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "base_reloaded.h"

void	ft_putchar(char ch);

void	ft_elapsed_time(int (*fn)(int), int val)
{
	double d = 0.0;
	clock_t t0 = clock();
	fn(val);
	d += (double)(clock() - t0) / CLOCKS_PER_SEC;
	printf("\x1b[38:5:14mTime:\x1b[0m %f\n", d);
	return ;
}

int	main()
{
	printf("\x1b[38:5:33mTest pattern is the following\x1b[0m:\n\x1b[38:5:47m> Expecting\x1b[0m\n\x1b[38:5:9m< Output\x1b[0m\n\n");

	printf("\n----------  ex06/ft_print_alphabet\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("abcdefghijklmnopqrstuvwxyz\n");
	ft_print_alphabet();


	printf("\n\n----------  ex07/ft_print_numbers\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("0123456789\n");
	ft_print_numbers();


	printf("\n\n----------  ex08/ft_is_negative\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("PPN\n");
	ft_is_negative(0);
	ft_is_negative(10);
	ft_is_negative(-10);


	printf("\n\n----------  ex09/ft_ft\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("42\n");
	int var0 = 10;
	ft_ft(&var0);
	printf("%d\n", var0);


	printf("\n----------  ex10/ft_swap\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("20, 10\n");
	int a = 10;
	int b = 20;
	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);


	printf("\n----------  ex11/ft_div_mod\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("3, 1\n");
	int div, mod;
	int var1 = 10;
	int var2 = 3;
	ft_div_mod(var1, var2, &div, &mod);
	printf("%d, %d\n", div, mod);


	printf("\n----------  ex12/ft_iterative_factorial\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("fact(%d)\n0\n", -81);
	printf("%d\n", ft_iterative_factorial(-81));
	ft_elapsed_time(&ft_iterative_factorial, -81);

	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	printf("fact(%d)\n0\n", 67);
	printf("%d\n", ft_iterative_factorial(67));
	ft_elapsed_time(&ft_iterative_factorial, 67);
	
	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	printf("fact(%d)\n1\n", 0);
	printf("%d\n", ft_iterative_factorial(0));
	ft_elapsed_time(&ft_iterative_factorial, 0);
	
	printf("\n\x1b[38:5:11mTest_4:\x1b[0m\n");
	printf("fact(%d)\n1\n", 1);
	printf("%d\n", ft_iterative_factorial(1));
	ft_elapsed_time(&ft_iterative_factorial, 1);
	
	printf("\n\x1b[38:5:11mTest_5:\x1b[0m\n");
	printf("fact(%d)\n2\n", 2);
	printf("%d\n", ft_iterative_factorial(2));
	ft_elapsed_time(&ft_iterative_factorial, 2);
	
	printf("\n\x1b[38:5:11mTest_6:\x1b[0m\n");
	printf("fact(%d)\n479001600\n", 12);
	printf("%d\n", ft_iterative_factorial(12));
	ft_elapsed_time(&ft_iterative_factorial, 12);
	
	printf("\n\x1b[38:5:11mTest_7:\x1b[0m\n");
	printf("fact(%d)\n3628800\n", 10);
	printf("%d\n", ft_iterative_factorial(10));
	ft_elapsed_time(&ft_iterative_factorial, 10);
	

	printf("\n----------  ex13/ft_recursive_factorial\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("fact(%d)\n0\n", 27);
	printf("%d\n", ft_recursive_factorial(-27));
	ft_elapsed_time(&ft_recursive_factorial, -27);

	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	printf("fact(%d)\n0\n", 13);
	printf("%d\n", ft_recursive_factorial(13));
	ft_elapsed_time(&ft_recursive_factorial, 13);

	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	printf("fact(%d)\n1\n", 0);
	printf("%d\n", ft_recursive_factorial(0));
	ft_elapsed_time(&ft_recursive_factorial, 0);

	printf("\n\x1b[38:5:11mTest_4:\x1b[0m\n");
	printf("fact(%d)\n1\n", 1);
	printf("%d\n", ft_recursive_factorial(1));
	ft_elapsed_time(&ft_recursive_factorial, 1);

	printf("\n\x1b[38:5:11mTest_5:\x1b[0m\n");
	printf("fact(%d)\n2\n", 2);
	printf("%d\n", ft_recursive_factorial(2));
	ft_elapsed_time(&ft_recursive_factorial, 2);

	printf("\n\x1b[38:5:11mTest_6:\x1b[0m\n");
	printf("fact(%d)\n479001600\n", 12);
	printf("%d\n", ft_recursive_factorial(12));
	ft_elapsed_time(&ft_recursive_factorial, 12);

	printf("\n\x1b[38:5:11mTest_7:\x1b[0m\n");
	printf("fact(%d)\n362880\n", 9);
	printf("%d\n", ft_recursive_factorial(9));
	ft_elapsed_time(&ft_recursive_factorial, 9);


	printf("\n----------  ex14/ft_sqrt\n");
	int val;
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	val = -4194;
	printf("sqrt(%d)\n0\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_2:\x1b[0m");
	val = 0;
	printf("\nsqrt(%d)\n0\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_3:\x1b[0m");
	val = 214748364;
	printf("\nsqrt(%d)\n0\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_4:\x1b[0m");
	val = 1175392656;
	printf("\nsqrt(%d)\n34284\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_5:\x1b[0m");
	val = 174473891;
	printf("\nsqrt(%d)\n0\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_6:\x1b[0m");
	val = 1049695201;
	printf("\nsqrt(%d)\n32399\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_7:\x1b[0m");
	val = 161369637;
	printf("\nsqrt(%d)\n0\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);
	printf("\n\x1b[38:5:11mTest_8:\x1b[0m");
	val = 1126609225;
	printf("\nsqrt(%d)\n33565\n", val);
	printf("%d\n", ft_sqrt(val));
	ft_elapsed_time(&ft_sqrt, val);


	printf("\n----------  ex15/ft_putstr\n");
	char *str = "";
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n\n");
	ft_putstr(str);
	str = "lu7kCivoHXVSh";
	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	printf("lu7kCivoHXVSh\n");
	ft_putstr(str);
	printf("\n");
	str = "foo bar baz";
	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	printf("foo bar baz\n");
	ft_putstr(str);
	printf("\n");
	str = "	yJg3 JmwlO YvE  DcMwPR0es 	ogM4PsUnL";
	printf("\n\x1b[38:5:11mTest_4:\x1b[0m\n");
	printf("	yJg3 JmwlO YvE  DcMwPR0es 	ogM4PsUnL\n");
	ft_putstr(str);
	printf("\n");


	printf("\n----------  ex16/ft_strlen\n");
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	str = "";
	printf("0\n");
	printf("%d\n", ft_strlen(str));
	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	str = "foo";
	printf("3\n");
	printf("%d\n", ft_strlen(str));
	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	str = "	foo bar baz";
	printf("12\n");
	printf("%d\n", ft_strlen(str));


	printf("\n----------  ex17/ft_strcmp\n");
	char *s1 = "abc";
	char *s2 = "abc";
	printf("\x1b[38:5:11mTest_1:\x1b[0m\n");
	printf("0\n");
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "abcdefg";
	s2 = "abc";
	printf("\n\x1b[38:5:11mTest_2:\x1b[0m\n");
	printf("100\n");
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "abc";
	s2 = "abcdefg";
	printf("\n\x1b[38:5:11mTest_3:\x1b[0m\n");
	printf("-100\n");
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "123";
	s2 = "125";
	printf("\n\x1b[38:5:11mTest_4:\x1b[0m\n");
	printf("-2\n");
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "523";
	s2 = "125";
	printf("\n\x1b[38:5:11mTest_5:\x1b[0m\n");
	printf("4\n");
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "";
	s2 = "123";
	printf("\n\x1b[38:5:11mTest_6:\x1b[0m\n");
	printf("-49\n");
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "ABC";
	s2 = "";
	printf("\n\x1b[38:5:11mTest_7:\x1b[0m\n");
	printf("65\n");
	printf("%d\n", ft_strcmp(s1, s2));

	return (0);
}
