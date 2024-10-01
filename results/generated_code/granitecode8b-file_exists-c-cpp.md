Here's the converted code from C to C++ that verifies whether a file called input.txt and a directory called docs exist in both the current working directory and the root filesystem:
```
#include 
#include 
#include 
#include 
using namespace std;
/* Check for regular file. */
bool check_reg(const string& path) {
	struct stat sb;
	return stat(path.c_str(), &sb) == 0 && S_ISREG(sb.st_mode);
}
/* Check for directory. */
bool check_dir(const string& path) {
	struct stat sb;
	return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}
int main() {
	string cwd = getcwd(nullptr, 0);
	if (check_reg("input.txt") && check_dir("docs")) {
		cout << "Input.txt is a regular file and docs is a directory in the current working directory." << endl;
	}
	else {
		cout << "One or both of input.txt and docs are not found in the current working directory." << endl;
	}
	if (check_reg(cwd + "/input.txt") && check_dir(cwd + "/docs")) {
		cout << "Input.txt is a regular file and docs is a directory in the root filesystem." << endl;
	}
	else {
		cout << "One or both of input.txt and docs are not found in the root filesystem." << endl;
	}
	return 0;
}
```
Note that we used `string` instead of `const char*` for the file and directory paths, as it is safer to use `string` when working with files and directories. We also used `getcwd()` to get the current working directory and concatenate it with the relative file and directory paths.

