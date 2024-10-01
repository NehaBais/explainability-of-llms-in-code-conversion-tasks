Sure, here's the C++ code that accomplishes the same task:
```
#include 
#include 
using namespace std;
int main() {
 int fd1 = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR);
 close(fd1);
 mkdir("docs", S_IRWXU);
 return 0;
}
```
In this C++ code, we use the `open()` function to create a new file called "output.txt" in the current working directory with the following permissions: read and write for the owner (user), no permissions for other users (group), and no permissions for others (world). We then close the file descriptor using the `close()` function.
To create an empty directory called "docs" in the filesystem root, we use the `mkdir()` function with the following permissions: read and write for the owner (user), read and execute for the group and other users, and no permissions for others. We also specify the `S_IRWXU` flag to set all three permissions on the directory for the current user.
Note that we use the `S_IRUSR`, `S_IWUSR`, and `S_IRWXU` constants from the `<sys/stat.h>` header file to set the desired file permissions. These constants represent the read (`S_IRUSR`), write (`S_IWUSR`), and execute (`S_IXUSR`) permissions for the owner (user), respectively. We also use the `S_IRWXU` constant to set all three permissions on the directory for the current user.

