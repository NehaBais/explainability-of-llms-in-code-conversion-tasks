#include <cstdio>
#include <cstring>
#include <iostream>

int main() {
  using namespace std;
  char filepath[] = "input.txt";
  long long size1, size2; // Using 'long long' to handle files larger than 4 GB.

  // Verify the size of a file called input.txt for a file in current working
  // directory
  FILE *fp = fopen(filepath, "rb");
  if (fp == NULL) {
    cout << "File not found or could not be opened.";
    return 0; // Return zero to indicate error
  } else {
    fseek(fp, 0, SEEK_END);
    size1 = (long long)(ftell(fp));
    fclose(fp);
  }

  cout << "Size of the file in current working directory is : " << size1
       << " bytes" << endl;

  // Verify the size of a file called input.txt for a file in filesystem root
  filepath[0] = '/'; // Put leading slash at the beginning of file path to
                     // access it from root
  fp = fopen(filepath, "rb");
  if (fp == NULL) {
    cout << "File not found or could not be opened.";
    return 0; // Return zero to indicate error
  } else {
    fseek(fp, 0, SEEK_END);
    size2 = (long long)(ftell(fp));
    fclose(fp);
  }

  cout << "Size of the file in filesystem root is : " << size2 << " bytes"
       << endl;
  return 0;
}