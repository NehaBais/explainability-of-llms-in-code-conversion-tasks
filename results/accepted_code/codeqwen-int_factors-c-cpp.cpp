int main(int argc, char *argv[]) {
  int nums2factor[] = {2059, 223092870, 3135, 45};
  Factors fctrs;
  fctrs.list = NULL;
  fctrs.count = 0;

  char sep;
  int i, j;

  for (i = 0; i < 4; i++) {
    factor(nums2factor[i], &fctrs);
        printf("
factors of %d are:
  ", nums2factor[i]);
        sep = ' ';
        for (j=0; j<fctrs.count; j++) {
      printf("%c %d", sep, fctrs.list[j]);
      sep = ',';
        }
        printf("
");
  }
  return 0;
}