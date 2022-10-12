if [ $# -eq 0 ]
then
	read -p "Enter the directory : " dir
elif [ $# -eq 1 ]
then
	dir=$1
elif [$# -gt 1]
then
	echo "Invalid number of arguments sent"
	exit 1
fi
if [ -d $dir ]
then
	echo -e "\nThe files and folders in the directory are :-\n"
	ls -1 $dir
else
	echo "directory not found"
fi
