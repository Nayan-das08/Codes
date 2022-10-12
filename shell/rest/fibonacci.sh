echo -e "FIBONACCI SERIES ($1 terms)\n"
n=$1

a=0
b=1
c=0
sum=0

echo -n "0  1  "
for((i=1; i<=$n; i++))
do
	c=`expr $a + $b`
	echo -n "$c  "
	sum=`expr $sum + $c`
	a=$b
	b=$c
done
echo -e "\nsum of $n terms of fibonacci series = $sum"
