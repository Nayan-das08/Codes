echo -n "Enter first number  : "
read a

echo -n "Enter second number : "
read b

if test $a -lt $b
then
	echo "$a is small"
else
	echo "$b is small"
fi

