The error is generated due to an extraneous ')' after the condition part. 

To fix this, remove the extraneous ')' before the final '}' on line 32.

```c
#include 
#include 
#include 

int mkdirp(const char *path) {
    int rc = 0;

    if (rc == 0 || errno != EEXIST)) {
        rc = mkdirs(path, 0777));
    } else {
        rc = mkdirs(path, 0777));
    }

    return rc;
}
```
