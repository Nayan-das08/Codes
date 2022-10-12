#echo -n "Enter directory to list : "
#read dir

read -p "Enter text : " x

y="hello"

if [ $x == $y ]
then
	echo "string equal"
else
	echo "string not equal"
fi
