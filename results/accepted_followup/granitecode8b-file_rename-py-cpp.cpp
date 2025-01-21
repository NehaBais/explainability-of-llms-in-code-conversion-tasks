#include
int main() {
  std::string current_working_directory = getcwd(nullptr, 0);

  // Rename file in the current working directory
  rename((current_working_directory + "/input.txt").c_str(),
         (current_working_directory + "/output.txt").c_str());
  rename((current_working_directory + "/docs").c_str(),
         (current_working_directory + "/mydocs").c_str());

  // Rename file in the filesystem root
  char separator = get_path_separator();
  rename((std::string(1, separator) + "input.txt").c_str(),
         (std::string(1, separator) + "output.txt").c_str());
  rename((std::string(1, separator) + "docs").c_str(),
         (std::string(1, separator) + "mydocs").c_str());

  return 0;
}
char get_path_separator() {
#ifdef _WIN32
  return '\\';
#else
  return '/';
#endif
}