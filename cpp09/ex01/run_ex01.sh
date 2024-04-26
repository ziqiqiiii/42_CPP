#!/bin/bash

# Check if a file name is provided as an argument
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

# Check if the file exists
if [ ! -f "$1" ]; then
    echo "Error: File '$1' does not exist."
    exit 1
fi

# Read from the file line by line
while IFS= read -r line; do \
    # Assuming ex01 is an executable that takes one argument
    ./RPN "$line" 
done < "$1"