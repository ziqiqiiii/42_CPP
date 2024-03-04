#!/bin/bash

# Function to clean a directory
clean_dir() {
  if [ -f "Makefile" ]; then
    make -C . clean
  fi
}

# Loop through all directories (including subdirectories)
find . -type d -print | while read dir; do
  # Skip the current directory (./)
  if [[ "$dir" != "." ]]; then
    # Change directory and clean
    pushd "$dir" >/dev/null
    clean_dir
    # Pop back to the previous directory
    popd >/dev/null
  fi
done

echo "Cleaning completed!"