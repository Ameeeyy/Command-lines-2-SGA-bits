# Question 1 - Duplicate Submission Detection and Backup

## Objective

This shell script identifies duplicate assignment submissions, creates a backup of unique files, generates a processing report, and stores all error messages in a separate log file.

---

## Commands Used

### 1. mkdir

**Explanation:**
Created the required directories to store submissions, backups, and screenshots.

---

### 2. echo

**Explanation:**
Created sample submission files and wrote sample content into them.

---

### 3. cp

**Explanation:**
Copied one submission file to create a duplicate and also copied unique files into the backup directory.

---

### 4. md5sum

**Explanation:**
Generated a unique hash value for each file to detect duplicate submissions.

---

### 5. chmod +x

**Explanation:**
Provided execute permission to the shell script before running it.

---

### 6. ./duplicate_backup.sh

**Explanation:**
Executed the shell script to process submissions, detect duplicates, generate backups, and create the report.

---

### 7. cat report.txt

**Explanation:**
Displayed the report containing the total processed files, duplicate files, and backed-up files.

---

### 8. cat errors.log

**Explanation:**
Displayed the error log. The file remained empty because no errors occurred during execution.

---

## Linux Commands Justification

- **md5sum** was used to identify duplicate files by comparing hash values.
- **cp** copied only unique files into the backup directory.
- **mkdir** created the required folders.
- **chmod** made the shell script executable.
- **cat** displayed generated output files.

---

## Redirection Operators Used

- `>` created the report file.
- `>>` appended additional report information.
- `2>>` redirected error messages into `errors.log`.

---

## File Handling Techniques

- Files were read from the `submissions` folder.
- Unique files were copied into the `backup` folder.
- Report information was stored in `report.txt`.
- Errors were redirected into `errors.log`.

---

## Output

- Files Processed : 3
- Duplicate Files : 1
- Files Backed Up : 2