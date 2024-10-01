#include
#include
int main() {
  std::string current_working_directory = get_current_working_directory();

  // Rename file in the current working directory
  rename((current_working_directory + "/input.txt").c_str(),
         (current_working_directory + "/output.txt").c_str());
  rename((current_working_directory + "/docs").c_str(),
         (current_working_directory + "/mydocs").c_str());

  // Rename file in the filesystem root
  std::string separator = get_path_separator();
  rename((separator + "input.txt").c_str(), (separator + "output.txt").c_str());
  rename((separator + "docs").c_str(), (separator + "mydocs").c_str());

  return 0;
}
std::string get_current_working_directory() {
  char buffer[1024];
  std::getcwd(buffer, sizeof(buffer));
  return buffer;
}
char get_path_separator() {
#ifdef _WIN32
  return '\\';
#else
  return '/';
#endif
}