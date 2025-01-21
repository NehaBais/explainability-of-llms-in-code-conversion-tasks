This problem requires the knowledge of file system operations and Windows specific commands. Therefore, it cannot be solved using general programming languages like JavaScript or C++, but rather specifically needs to be done on a Windows machine running a command prompt shell. 

You can solve this task by executing the following script:
```bat
for /R "c:\docs" ren "mydocs"
move "input.txt" "output.txt"
for /R "c:\" ren "mydocs"
move "input.txt" "output.txt"
```
In this script, it first renames the 'docs' directory to 'mydocs' in both current working directory and filesystem root using a `for` loop with the `ren` command. Then it moves the files named 'input.txt' into 'output.txt'. Again, it performs these operations in both directories and filesystem roots.
  
Please ensure that you have execute permissions for these scripts (assuming you run them in their own terminal). Note that this script will overwrite any existing files with the same name or folder under the new names, if they exist already.
