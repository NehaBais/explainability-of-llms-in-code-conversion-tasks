#include
using namespace std;
int main() {
  string original = "Mary had a {} lamb";
  string value = "big";
  string interpolated = "";

  // Replace {} in the original string with value
  size_t pos = original.find("{}");
  if (pos != string::npos) {
    interpolated = original.replace(pos, 1, value);
  } else {
    interpolated = original;
  }

  cout << interpolated << endl;

  // Specify order
  original = "{1} had a {0} lamb";
  value = "little";
  if (pos != string::npos) {
    interpolated = original.replace(pos, 1, value);
  } else {
    interpolated = original;
  }
  cout << interpolated << endl;

  // Or named arguments if you prefer
  original = "{name} had a {adj} lamb";
  value = "little";
  map replacements = {{"adj", "little"}, {"name", "Mary"}};
  for (auto const &[key, val] : replacements) {
    size_t pos = original.find("{" + key + "}");
    if (pos != string::npos) {
      interpolated = original.replace(pos, 1, val);
    } else {
      interpolated = original;
      break;
    }
  }
  cout << interpolated << endl;

  return 0;
}