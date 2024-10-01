#include
#include
using namespace std;

int main() {
  try {
    ofstream file1("output.txt");
    if (file1) {
      cout << "File created successfully" << endl;
    } else {
      cout << "Error creating file" << endl;
    }
    file1.close();

    ofstream file2(system("pwd") + "/output.txt");
    if (file2) {
      cout << "File created successfully" << endl;
    } else {
      cout << "Error creating file" << endl;
    }
    file2.close();

    string command = "mkdir docs";
    int result = system(command.c_str());
    if (result == 0) {
      cout << "Directory created successfully" << endl;
    } else {
      cout << "Error creating directory" << endl;
    }

    string rootCommand = "mkdir /docs";
    result = system(rootCommand.c_str());
    if (result == 0) {
      cout << "Directory created successfully in root" << endl;
    } else {
      cout << "Error creating directory in root" << endl;
    }

    return 0;
  }