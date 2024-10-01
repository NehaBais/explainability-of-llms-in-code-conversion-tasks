```java
import java.io.File;

public class Mkdirp {

    public static void mkdirp(String path) {
        File directory = new File(path);
        directory.mkdirs();
    }
}
```

**Explanation:**

* We import the `File` class from the `java.io` package.
* The `mkdirp()` method takes a single path string as input.
* It creates a new `File` object for the given path.
* The `mkdirs()` method recursively creates the directory and any missing parent directories.

**Usage:**

mkdirp("./path/to/dir");

**Note:**

* The `mkdirp()` method is cross-platform and works on both Windows and Linux.
* If the directory already exists, the method returns successfully without raising any exceptions.
