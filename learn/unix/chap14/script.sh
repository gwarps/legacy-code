#!/bin/bash
#script.sh Sample shell script
echo "Today's date: `date`"
echo "This month's Calender:"
cal `date "+%m 20%y"`
echo "My Shell is" $SHELL
