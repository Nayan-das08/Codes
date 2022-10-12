echo -n "Enter file name (along with extension) : "
read file

echo -n "Enter word : "
read word

echo -e "\n\nFile before removing the word \"$word\":-\n"
cat $file

grep -v $word $file > new.txt

echo -e "\n\nFile after removing the word \"$word\":-\n"
cat new.txt
