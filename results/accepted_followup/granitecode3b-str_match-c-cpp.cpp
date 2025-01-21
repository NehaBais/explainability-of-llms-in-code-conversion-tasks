#include <iostream>
#include <string>
using namespace std;

int startsWith(string container, string target) {
  if (container.find(target) != string::npos) {
    cout << "The first string starts with the second string at position "
         << container.find(target) + 1 << endl;
    return 1;
  } else {
    return 0;
  }
}

int endsWith(string container, string target) {
  if (container.rfind(target) != string::npos) {
    cout << "The first string ends with the second string at position "
         << container.rfind(target) + 1 << endl;
    return 1;
  } else {
    return 0;
  }
}

int doesContain(string container, string target) {
  if (container.find(target) != string::npos) {
    cout << "The first string contains the second string at position "
         << container.find(target) + 1 << endl;
    return 1;
  } else {
    return 0;
  }
}