**Answer:** 
```
char *adjective = "big"; 
char *lyric;
int i, j; //loop control variables

strcpy(lyric, "Mary had a ");
for (i=0,j=1; lyric[i]; ++i) { /* skip spaces */
    if (isspace(lyric[i]))
        continue;
    if (lyric[i] == 'a')
        break; 
}
strcat(lyric, adjective); // append the string to the current string
for (++j; lyric[j]; ++j) { /* skip spaces */
    if (isspace(lyric[j]))
        continue;
    else
        break;  
}
strcat(lyric, " lamb");  //append the final word
```
**Explanation:** C doesn't provide a `String.format` method to insert data from other variables into strings so that has been implemented here through string concatenation. The first part of this code uses for loops to extract and append the adjective (if there is one) onto the phrase "Mary had a ", then adds on a space, followed by the word "lamb" at the end.

