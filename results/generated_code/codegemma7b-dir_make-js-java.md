```java
import java.io.File;

public class Mkdirp {

    public static void mkdirp(String path) {
        File directory = new File(path);

        if (!directory.exists()) {
            directory.mkdirs();
        }
    }
}
```

**Explanation:**

* The `mkdirp()` method takes a single parameter, `path`, which specifies the directory to create.
* It creates a `File` object representing the directory.
* If the directory doesn't exist, it calls the `mkdirs()` method to create it.
* The `mkdirs()` method recursively creates any missing parent directories.

**Usage:**

// Create a directory named "my-directory"
mkdirp("my-directory");

**Note:**

* This code is cross-platform compatible.
* The `mkdirp()` method creates any missing parent directories.
* If the directory already exists, it returns successfully without any errors.
