To convert the given JavaScript code to Java, you can use Java's built-in `java.nio.file.Files` class for file operations and `java.io.File` class for directory operations. Here is how you can achieve the same functionality in Java:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        // Function to handle exceptions and log errors
        try {
            createFileAndDirectory("output.txt", "");
            createFileAndDirectory("/output.txt", "");
            
            createDirectory("docs");
            createDirectory("/docs");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Method to create a file with the given path and content
    public static void createFileAndDirectory(String path, String content) throws IOException {
        Path filePath = Paths.get(path);
        Files.createDirectories(filePath.getParent()); // Ensure parent directories are created
        Files.write(filePath, content.getBytes());
    }

    // Method to create a directory with the given path
    public static void createDirectory(String path) throws IOException {
        Path dirPath = Paths.get(path);
        if (!dirPath.toFile().exists()) {
            Files.createDirectories(dirPath);
        }
    }
}
```

### Explanation:
1. **Imports**: We import necessary classes from `java.nio.file` for file and directory operations, and from `java.io` for handling exceptions.

2. **Main Method**: The `main` method calls two helper methods: `createFileAndDirectory` to create files and `createDirectory` to create directories.

3. **createFileAndDirectory Method**:
   - It takes a `path` and `content` as parameters.
   - It uses `Paths.get(path)` to get the path object.
   - It ensures that any parent directories are created using `Files.createDirectories(filePath.getParent())`.
   - It writes the content to the file using `Files.write(filePath, content.getBytes())`.

4. **createDirectory Method**:
   - It takes a `path` as a parameter.
   - It uses `Paths.get(path)` to get the path object.
   - It checks if the directory already exists using `dirPath.toFile().exists()`.
   - If the directory does not exist, it creates the directory using `Files.createDirectories(dirPath)`.

This Java code will create an empty file named "output.txt" and an empty directory named "docs" in both the current working directory and the filesystem root.
