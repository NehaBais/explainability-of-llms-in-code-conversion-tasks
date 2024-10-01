#include
int main() {
  std::rename("input.txt", "output.txt");
  std::rename("docs", "mydocs");
#ifdef _WIN32
  std::rename(L"C:/input.txt", L"C:/output.txt");
  std::rename(L"C:/docs", L"C:/mydocs");
#endif
  return 0;
}