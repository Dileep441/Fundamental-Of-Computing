echo "Enter a string"
read str
echo "Enter a substring"
read substr

prefix=${str%%$substr*}
index=${#prefix}

if [[ index -eq ${#str} ]];
then
echo "Substring is not present in string."
else
echo "Index of substring in string $index"
fi
