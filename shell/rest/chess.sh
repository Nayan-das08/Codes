n=$1
for ((i=1; i<=$n; i++))
do
	for ((j=1; j<=$n; j++))
	do
		a=`expr $i + $j`
		b=`expr $a % 2`

		if test $b -eq 0
		then
			echo -e -n "\033[47m "; echo -e -n "\033[47m "
		else
			echo -e -n "\033[40m "; echo -e -n "\033[40m "
		fi
	done
	echo -e -n "\033[40m "
	echo ""
done
