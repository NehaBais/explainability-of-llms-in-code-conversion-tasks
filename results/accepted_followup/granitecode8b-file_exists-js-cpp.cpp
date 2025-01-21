#include
int main() {
  bool fso_fileexists_1 = (0 != _access("input.txt", 0));
  bool fso_fileexists_2 = (0 != _access("c:/input.txt", 0));
  bool fso_folderexists_1 = (0 != _access("docs", 0));
  bool fso_folderexists_2 = (0 != _access("c:/docs", 0));
  return 0;
}