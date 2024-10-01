char *s1;
int i = 0;
printf("Enter the text: ");
scanf("%c", &s1[i]);
for (i = 1; s1[i] != '\n'; i++) {
  printf(",%d ", s1);
}
return 0;