#include
#include
void create(const std::string &directory) {
  std::ofstream output(directory + "/output.txt");
  output.close();
  mkdir((directory + "/docs").c_str());
}
int main() {
  create("."); // current directory
  create("/"); // root directory
  return 0;
}