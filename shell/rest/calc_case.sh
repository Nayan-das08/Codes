clear

a=$1
b=$2

echo "operands are :  $a, $b"

echo -e "\n________MENU________"
echo -e "  1. Addition "
echo -e "  2. Subtraction "
echo -e "  3. Multiplication "
echo -e "  4. Division "
echo -e "  5. Modulus"
echo -e "Enter operation : \c"
read choice


case $choice in
	1) echo "$a + $b = `expr $a + $b`";;
	2) echo "$a - $b = `expr $a - $b`";;
	3) echo "$a * $b = `expr $a \* $b`";;
	4) echo "$a / $b = `expr $a / $b`";;
	5) echo "$a % $b = `expr $a % $b`";;
	*) echo "Invalid operation selected";;
esac
