n=$1
c=$2

for ((i=1; i<=$n; i++))
do
	a=`expr $n + 1 - $i`
	for ((j=1; j<=a; j++))
	do
		echo -n " "
	done
	b=`expr 2 \* $i - 1`
	for ((j=1; j<=b; j++))
	do
		echo -n "$c"
	done
	echo ""
done
