clear
gcc -Wall -Wextra -Werror ex{06..17}/*.c ft_putchar.c test_main.c -o test1.out
./test1.out

echo ""
echo "--------  ex18/ft_print_params.c ---------"
gcc -Wall -Wextra -Werror ex18/ft_print_params.c ft_putchar.c -o test2.out

echo './a.out "foo" "bar" "baz"'
./test2.out foo bar baz
echo ""
echo './a.out "MmXoOD" "6pdDf37JGm5x" "rLcEYU" "oeQv" "scAoHeQw8B" "XoIeHpcTSV" "WuibgRqP8MmH" "hYMbkV15NT" "K" "9iJDCt"'
./test2.out MmXoOD 6pdDf37JGm5x "rLcEYU oeQv" scAoHeQw8B XoIeHpcTSV "WuibgRqP8MmH hYMbkV15NT" K 9iJDCt
echo ""

echo "--------  ex19/ft_sort_params.c ---------"
gcc -Wall -Wextra -Werror ex19/ft_sort_params.c ft_putchar.c -o test3.out

echo './a.out "foo" "bar" "baz"'
./test3.out foo bar baz
echo ""
echo './a.out "ABC" "32dafji" "abc" "123ABC" " fdsA4 Sd123"'
./test3.out ABC 32dafji 123ABC abc "fdsA4 Sd123"
echo ""

gcc -Wall -Wextra -Werror ex{20..21}/*.c ft_putchar.c test_main2.c -I ex22/ -I ex23/ -o test4.out
./test4.out

echo ""
echo "--------  ex24/Makefile ---------"
cp -r includes/ ex24/
cp -r srcs/ ex24/
cp -r test_main3.c ex24/
cd ex24
make
echo "ar -t libft.a"
ar -t libft.a
echo ""
echo "Testing library:"
gcc test_main3.c -I includes/ -L. -lft
./a.out
make fclean
rm -rf includes/ srcs/ test_main3.c a.out
echo ""
echo "--------  ex25/ft_foreach"
cd ..
gcc -Wall -Wextra -Werror ex{25..26}/*.c test_main4.c ft_putnbr.c ft_putchar.c -o test5.out
./test5.out
echo "--------  ex27/Makefile++"
cp testfile ex27/
cd ex27
make
echo "./ft_display_file "
echo "File name missing."
./ft_display_file 
echo ""
echo "./ft_display_file Makefile test1 test2"
echo "Too many arguments."
./ft_display_file Makefile test1 test2
echo ""
echo "./ft_display_file Makefile"
./ft_display_file Makefile
echo ""
echo "./ft_display_file testfile"
./ft_display_file testfile
echo ""
rm -f testfile
make fclean
