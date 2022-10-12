echo "SMALLEST OF 3 NUMBERS"

if test $# -eq 3
then
        echo -e "\nthe arguments passes : $1, $2, $3"
        if test $1 -gt $2 && test $1 -gt $3
        then
                echo "$1 is largest"
        elif test $2 -gt $3 && test $2 -gt $1
        then
                echo "$2 is largest"
        else
                echo "$3 is the largest"
        fi
else
        echo "invald number of arguments passed"
fi
