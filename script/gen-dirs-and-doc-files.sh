# !/bin/sh

echo "Arg 0: $0"
echo "Arg 1: $1"
echo "Arg 2: $2"
echo "You provided $# arguments"

if [ $# -lt 1 ]
then
    echo "Please Provide Input File";
    exit 1;
fi



echo "I am here \n";