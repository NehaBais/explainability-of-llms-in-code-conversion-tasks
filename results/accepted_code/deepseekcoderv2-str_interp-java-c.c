char *adjective = "big";
char *lyric;
int i, j; // loop control variables

strcpy(lyric, "Mary had a ");
for (i = 0, j = 1; lyric[i]; ++i) { /* skip spaces */
  if (isspace(lyric[i]))
    continue;
  if (lyric[i] == 'a')
    break;
}
strcat(lyric, adjective);  // append the string to the current string
for (++j; lyric[j]; ++j) { /* skip spaces */
  if (isspace(lyric[j]))
    continue;
  else
    break;
}
strcat(lyric, " lamb"); // append the final word