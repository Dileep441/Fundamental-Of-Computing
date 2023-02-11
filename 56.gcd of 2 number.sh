echo "Enter a number"
read a
echo "Enter another number"
read b
sum=$(($a+ $b))
echo "The sum of given 2 numbers is: " $sum
diff=$(($a - $b))
echo "The difference of given 2 numbers is: " $diff
prod=$(($a * $b))
echo "The product of given 2 numbers is:" $prod
