The equivalent code in Java would be:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) throws Exception {
        File dir = new File("path/to/dir");
        if (!dir.exists()) {
            dir.mkdirs();
        }
    }
}
```
This Java script will create a directory at the specified path. If the directory already exists, it won't throw an error but simply do nothing. Note that this code does not handle errors from creating directories on different operating systems as well as non-existent parent directories.
