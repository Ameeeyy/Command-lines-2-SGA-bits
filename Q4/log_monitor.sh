#!/bin/bash

LOGFILE="system.log"
REPORT="error_report.txt"

touch "$REPORT"

tail -f "$LOGFILE" | grep "ERROR" >> "$REPORT" 2>/dev/null