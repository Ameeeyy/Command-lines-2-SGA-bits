#!/bin/bash

SOURCE="submissions"
BACKUP="backup"
REPORT="report.txt"
ERRORLOG="errors.log"

mkdir -p "$BACKUP"

processed=0
duplicates=0
backedup=0

declare -A hashes

for file in "$SOURCE"/*
do
    if [ -f "$file" ]; then
        ((processed++))

        hash=$(md5sum "$file" 2>>"$ERRORLOG" | awk '{print $1}')

        if [[ -z "${hashes[$hash]}" ]]; then
            hashes[$hash]=1
            cp "$file" "$BACKUP"/ 2>>"$ERRORLOG"
            ((backedup++))
        else
            ((duplicates++))
        fi
    fi
done

echo "Files Processed : $processed" > "$REPORT"
echo "Duplicate Files : $duplicates" >> "$REPORT"
echo "Files Backed Up : $backedup" >> "$REPORT"