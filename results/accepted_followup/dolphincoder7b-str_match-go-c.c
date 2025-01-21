size_t start = 0;
while ((start = (size_t)strstr(first + start, second))) {
  printf("%d  ", start - first);
  if (strlen(second) > strlen(first))
    break;
  ++start;
}