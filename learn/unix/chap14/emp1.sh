#!/bin/sh
# emp1.sh Interactive version - user read to take two inputs

echo -e "Enter the Pattern to be searched: \c"
read pname
echo -e "Enter the file to be used: \c"
read filename
echo "Searching for $pname into file: $filename.."
grep "$pname" $filename
echo "Search Completed"
