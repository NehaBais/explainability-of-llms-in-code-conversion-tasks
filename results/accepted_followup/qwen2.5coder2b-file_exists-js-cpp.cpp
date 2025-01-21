#include <boost/filesystem.hpp>
using namespace boost::filesystem;

int main() {
  // File and Directory Verification for current working directory
  try {
    if (exists(current_path() / "input.txt") &&
        exists(current_path() / "docs")) {
      cout << "Files and directories verified in the current directory."
           << endl;
    } else {
      cerr << "Error verifying files and directories in the current directory."
           << endl;
      return 1;
    }
  } catch (std::exception &e) {
    cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  // File and Directory Verification for root of the filesystem
  try {
    if (exists("input.txt") && exists("docs")) {
      cout << "Files and directories verified in the system root." << endl;
    } else {
      cerr << "Error verifying files and directories in the system root."
           << endl;
      return 1;
    }
  } catch (std::exception &e) {
    cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}