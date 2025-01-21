#include
#include
int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <path>" << std::endl;
    return 1;
  }
  std::string path = argv[1];
  struct stat st;
  int result = 0;
  for (size_t i = 0; i < path.length(); ++i) {
    if (path[i] == '/') {
      path[i] = 0;
      int res = stat(path.c_str(), &st);
      if (res == -1 && errno != ENOENT) {
        result = -1;
        break;
      } else if (res == 0) {
        if (!S_ISDIR(st.st_mode)) {
          std::cerr << "couldn't create directory " << path << std::endl;
          result = -1;
          break;
        }
      }
      path[i] = '/';
    }
  }
  return result;
}