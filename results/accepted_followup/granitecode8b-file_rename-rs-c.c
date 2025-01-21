#include
#include
int main() {
  const char *input_path = "input.txt";
  const char *output_path = "output.txt";
  const char *docs_path = "docs";
  const char *mydocs_path = "mydocs";
  int err = rename(input_path, output_path);
  if (err != 0) {
    perror("File move error");
    return 1;
  }
  err = rename(docs_path, mydocs_path);
  if (err != 0) {
    perror("Directory move error");
    return 1;
  }
  err = rename("/", input_path);
  if (err != 0) {
    perror("File move error");
    return 1;
  }
  err = rename("/", docs_path);
  if (err != 0) {
    perror("Directory move error");
    return 1;
  }
  return 0;
}