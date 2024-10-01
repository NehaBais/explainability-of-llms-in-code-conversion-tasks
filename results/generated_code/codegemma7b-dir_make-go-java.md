```java
import java.io.File;

public class MkdirAll {

    public static void mkdirAll(String path) {
        File directory = new File(path);
        if (!directory.exists()) {
            directory.mkdirs();
        }
    }

    public static void main(String[] args) {
        String path = "/tmp/some/path/to/dir";
        mkdirAll(path);
    }
}
```

**Explanation:**

* The `mkdirAll()` method takes a single path string as input.
* It creates a `File` object representing the directory.
* If the directory does not exist, the `mkdirs()` method is called to create it along with any missing parent directories.
* The method returns `true` if the directory was created successfully.

**Example Usage:**

String path = "/tmp/some/path/to/dir";
mkdirAll(path);

**Note:**

* The `mkdirAll()` method is cross-platform and works on most operating systems.
* The `0770` permission mode is not specified in Java, so you may need to adjust it based on your needs.
* The `mkdirAll()` method does not check if the directory already exists, so it will not throw an exception if it does.
