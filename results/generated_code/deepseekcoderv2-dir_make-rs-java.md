 Sure! Below is the equivalent Java code for the provided Rust code. This implementation uses Java's `Files` class from the `java.nio.file` package to create directories and ensure that all necessary parent directories are created if they do not exist.

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        try {
            // Create the directory and any missing parents
            Files.createDirectories(Paths.get("./path/to/dir"));
            System.out.println("Directory created successfully.");
        } catch (IOException e) {
            System.err.println("An Error Occurred: " + e.getMessage());
        }
    }
}
```

### Explanation:
1. **Import Statements**: We import the necessary classes from the `java.nio.file` package, which includes the `Files` and `Paths` classes.
2. **Main Method**: The `main` method is defined where the directory creation logic resides.
3. **Creating Directories**: 
   - `Files.createDirectories(Paths.get("./path/to/dir"))`: This line creates the directory at the specified path and ensures that all necessary parent directories are created if they do not exist.
4. **Exception Handling**: If an error occurs during the directory creation, it is caught in a try-catch block, and an error message is printed to the standard error stream.

This implementation should work equally well on different platforms as Java provides cross-platform support for file system operations.
