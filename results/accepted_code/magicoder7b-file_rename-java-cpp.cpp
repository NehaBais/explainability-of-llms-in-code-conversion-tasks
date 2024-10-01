#include <cstdlib>
#include <iostream>

int main() {
  std::cout << "The following file called input.txt was renamed as output.txt."
            << std::endl;
  std::rename("input.txt", "output.txt");

  std::cout
      << "The following file called /input.txt was renamed as /output.txt."
      << std::endl;
  std::rename("/input.txt", "/output.txt");

  std::cout << "The following directory called docs was renamed as mydocs."
            << std::endl;
  // You can't use the same rename function because directories require a
  // different approach and may not have the same syntax in all systems
#ifdef _WIN32
  _wrename(L"docs", L"mydocs");
#else
  std::rename("docs/", "mydocs/");
#endif

  std::cout << "The following directory called /docs/ was renamed as /mydocs/."
            << std::endl;
  // Windows doesn't support forward slashes in paths, so we use backslash
  // instead. The root of the filesystem (/) is usually not writable anyway.
#ifdef _WIN32
  _wrename(L"/docs\\", L"/mydocs\\");
#else
  std::rename("/docs/", "/mydocs/");
#endif

  return 0;
}