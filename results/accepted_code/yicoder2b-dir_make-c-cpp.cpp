#include <fcntl.h> // For O_* flags defined in sys/stat.h
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "usage: " << argv[0] << " <path>" << endl;
    return 1; // Return error code
  }

  string path = string(argv[1]); // Convert to string
  vector<string> dirs;           // Vector for storing each part of the path
  size_t pos = 0;                // Start position in the path

  // Splitting up the path into directories
  while ((pos = path.find('/', pos)) != string::npos) {
    dirs.push_back(path.substr(0, pos));
    if (pos + 1 < path.length()) {
      path[pos] = '/'; // Replace found directory with /
    }
  }

  // Check if each directory exists and make it if not
  for (size_t i = 0; i < dirs.size(); ++i) {
    string dirPath(dirs[i] + "/"); // Join path with /
    if (access(dirPath.c_str(), F_OK) == -1) {
      // Directory does not exist. Creating it
      int res =
          mkdir(dirPath.c_str(),
                0755); // The 755 is the octal representation of permissions,
                       // you can adjust these to suit your needs
      if (res == -1) {
        cout << "Failed to create directory: " << dirPath << endl;
        return 1;
      }
    } else {
      // Directory exists. Check if it is a directory
      struct stat sb;
      stat(dirPath.c_str(), &sb);
      if (!S_ISDIR(sb.st_mode)) {
        cout << "Directory " << dirPath << " exists but is not a directory."
             << endl;
        return 1; // Return error code
      }
    }
  }
  return 0; // Successful execution if all directories have been created
}