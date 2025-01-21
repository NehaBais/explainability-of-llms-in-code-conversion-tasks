#include
#include
using namespace std;
int startsWith(const string &container, const string &target) {
  size_t clen = container.length(), tlen = target.length();
  if (clen < tlen)
    return 0;
  return container.substr(0, tlen).compare(target) == 0;
}
int endsWith(const string &container, const string &target) {
  size_t clen = container.length(), tlen = target.length();
  if (clen < tlen)
    return 0;
  return container.substr(clen - tlen).compare(target) == 0;
}
int doesContain(const string &container, const string &target) {
  size_t pos = container.find(target);
  return pos != string::npos;
}