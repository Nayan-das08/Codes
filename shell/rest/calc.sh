#clear

if [ $# -lt 2 ]
then
	echo "Insufficient number of arguments provided"
	exit
fi

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


if test $choice -eq 1
then
	echo "$a + $b = `expr $a + $b`"

elif test $choice -eq 2
then
	echo "$a - $b = `expr $a - $b`"

elif test $choice -eq 3
then
	echo "$a * $b = `expr $a \* $b`"

elif test $choice -eq 4
then
	echo "$a / $b = `expr $a / $b`"

elif test $choice -eq 5
then
	echo "$a % $b = `expr $a % $b`"

else
	echo "Invalid operation selected"
fi
