 Here's the equivalent Java code for creating a directory and any missing parent directories using the `java.nio` package:

```java
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Mkdirp {
    public static void mkdirp(String pathStr, Runnable onSuccess, Runnable onFailure) {
        Path path = Paths.get(pathStr);
        try {
            if (!Files.exists(path)) {
                // Create the parent directory recursively
                Files.createDirectories(path);
            }
            if (onSuccess != null) {
                onSuccess.run();
            }
        } catch (Exception e) {
            if (onFailure != null) {
                onFailure.run();
            }
        }
    }

    public static void main(String[] args) {
        String dirPath = "./path/to/dir";
        mkdirp(dirPath, 
                () -> System.out.println("Directory created successfully."), 
                () -> System.err.println("Failed to create directory."));
    }
}
```

### Explanation:
1. **Imports**: The code imports `java.nio.file.Files` and `java.nio.file.Paths` for file system operations.
2. **mkdirp Method**: This method takes a string path, a `Runnable` for success, and a `Runnable` for failure. It converts the string to a `Path` object using `Paths.get(pathStr)`.
3. **Directory Creation**: If the directory does not exist (`Files.exists(path)` returns false), it creates all missing parent directories using `Files.createDirectories(path)`.
4. **Callbacks**: The method accepts `Runnable` callbacks for success and failure, allowing you to handle these events appropriately.
5. **Main Method**: Demonstrates the usage of the `mkdirp` method with a sample directory path.

This Java code should behave similarly to the provided JavaScript function, creating directories and their parents if they do not already exist.
