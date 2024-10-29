Your code is already in C++. It uses the system level calls such as `open()`, `creat()`, `mkdir()` and `close()` which are part of POSIX standard for Unix-like operating systems like Linux, Solaris etc. In C++, these methods do not exist so you can directly use them in your program. The file operation is performed using system calls from the kernel level itself via syscall interface provided by the OS. 

This code will create a new empty text file called "output.txt" and an empty directory called "docs". It sets the permissions for both files and directories to `0640` (rw-r-----) and `0750` (rwx------) respectively, equivalent to rw-r----- for output.txt and rwx------ for docs. 

Note: The execution of this C++ code should have sufficient privileges since creating a directory in filesystem root usually requires super user (root) access. Run the program with sudo if required.

