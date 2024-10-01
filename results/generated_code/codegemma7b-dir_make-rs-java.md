```java
import java.io.File;

public class Mkdirp {

    public static void mkdirp(String path) {
        File directory = new File(path);
        if (!directory.exists()) {
            directory.mkdirs();
        }
    }

    public static void main(String[] args) {
        mkdirp("./path/to/dir");
    }
}
```

**Explanation:**

* The `mkdirp()` method takes a single path string as an argument.
* It creates a new `File` object representing the directory.
* If the directory does not exist, it calls the `mkdirs()` method to create it.
* The `main()` method calls the `mkdirp()` method with the specified path.

**Cross-platform Compatibility:**

* The `mkdirp()` method is implemented in Java and works equally well across different platforms.
* The `File` class provides a cross-platform way to interact with the file system.

**Note:**

* The `mkdirp()` method does not return any value.
* If an error occurs during directory creation, the method will throw an `IOException`.
