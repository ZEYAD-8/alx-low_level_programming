#!/bin/bash

# Collect all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if any .c files exist
if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c "$file" -o "${file%.c}.o"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $file"
        exit 1
    fi
done

# Create the static library
ar rcs liball.a *.o

# Check if library creation was successful
if [ $? -eq 0 ]; then
    echo "Static library liball.a created successfully."
else
    echo "Failed to create the static library."
fi

# Clean up object files
rm -f *.o

