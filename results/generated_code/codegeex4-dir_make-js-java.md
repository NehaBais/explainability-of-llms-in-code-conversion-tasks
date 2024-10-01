In Java, you can achieve similar functionality using the `java.nio.file.Files` and `java.nio.file.Paths` classes. Below is an implementation that mirrors the behavior described in your JavaScript code:

```java
import java.io.IOException;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;

public class Mkdirp {

    public static void mkdirp(String pathStr) throws IOException {
        Path path = Paths.get(pathStr).normalize();
        
        try {
            Files.createDirectories(path);
        } catch (FileAlreadyExistsException e) {
            // The directory already exists, no action needed.
        } catch (IOException e) {
            // Handle other I/O errors
            throw new IOException("Error creating directory: " + pathStr, e);
        }
    }

    public static void main(String[] args) {
        try {
            mkdirp("./path/to/dir");
            System.out.println("Directory created successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

### Explanation:

- **Imports**: The necessary classes for file operations are imported.
  - `java.nio.file.Files`: Provides access to file system operations.
  - `java.nio.file.Paths`: Allows creation of paths from strings.
  - `java.io.IOException`: Exception class for input-output errors.

- **mkdirp method**:
  - Converts the given string path to a `Path` object and normalizes it (removes redundant separators and up-level references).
  - Attempts to create the directory using `Files.createDirectories()`.
    - If the directory already exists, `FileAlreadyExistsException` is caught and ignored.
    - Any other IO exceptions are re-thrown after wrapping with additional information.

- **main method**:
  - Demonstrates usage of the `mkdirp` function by trying to create a directory and printing a success message or an error stack trace if necessary.

This Java implementation should work equally well cross-platform as it leverages standard Java libraries which abstract away much of the platform-specific details.
