#!bin/bash
# emp2.sh: Non interactive version -- uses command line
# #contains the program name itself
echo "Program Name: $0
The Number of Arguments Specified is $#
The Arguments are: $*"
grep "$1" $2
echo -e "\nGAME OVER"
