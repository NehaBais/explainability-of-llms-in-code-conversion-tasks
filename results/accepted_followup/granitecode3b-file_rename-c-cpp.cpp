#include
int main() {
  std::rename(L"input.txt", L"output.txt");
  std::rename(L"docs", L"mydocs");
#ifdef _WIN32
  std::rename(L"C:/input.txt", L"C:/output.txt");
  std::rename(L"C:/docs", L"C:/mydocs");
#endif
  return 0;
}