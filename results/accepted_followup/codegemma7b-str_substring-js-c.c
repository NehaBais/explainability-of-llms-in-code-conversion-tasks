const char *substr1 = str + n;
const char *substr2 = str + n;
substr2[m] = '\0';

const char *substr3 = str + n;

const char *substr4 = str;
substr4[strlen(str) - 1] = '\0';

int idx = strcspn(str, "b");
const char *substr5 = str + idx;

int idx2 = strcspn(str, "bc");
const char *substr6 = str + idx2;