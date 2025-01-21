 Sure! Below is the Java code that mimics the behavior of `os.MkdirAll` from Golang, which creates a directory and any necessary but existing parent directories.

```java
import java.io.File;

public class MkdirAll {
    public static void mkdirs(String path) {
        File file = new File(path);
        if (!file.exists()) {
            boolean created = file.mkdirs();
            if (created) {
                System.out.println("Directory created successfully.");
            } else {
                System.err.println("Failed to create directory.");
            }
        } else {
            System.out.println("Directory already exists.");
        }
    }

    public static void main(String[] args) {
        String path = "/tmp/some/path/to/dir";
        mkdirs(path);
    }
}
```

This Java code does the following:
1. Creates a `File` object for the given path.
2. Checks if the file or directory already exists using the `exists()` method.
3. If it doesn't exist, it creates the directory and its parent directories using the `mkdirs()` method.
4. Prints a success message if the directory is created successfully or indicates that the directory already exists if it does not need to be created.
