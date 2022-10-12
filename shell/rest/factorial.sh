#clear

n=$1

if test $n -eq 0
then
	echo "$n! = 1"
else
	fact=1
	for ((i=1; i<=$n; i++))
	do
		fact=`expr $i \* $fact`
	done
	echo "$n! = $fact"
fi
