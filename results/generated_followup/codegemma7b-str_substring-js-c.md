The errors are caused by attempting to initialize variables with non-constant values, which is not allowed in C. To fix this, the initializer expressions for `substr1`, `substr2`, `substr3`, `substr4`, `substr5`, and `substr6` should be replaced with constant expressions.

```c
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
```
