Sure, here is the equivalent Java code for creating a directory and any missing parents:

```java
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class CreateDirectory {

    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            return;
        }

        String pathToCreate = args[0];
        Path directoryPath = Paths.get(pathToCreate);

        try {
            if (Files.exists(directoryPath)) {
                return;
            }

            if (Files.createDirectories(directoryPath).equals(directoryPath)) {
                System.out.println("Directory created successfully: " + pathToCreate);
            } else {
                System.out.println("Failed to create directory: " + pathToCreate);
            }
        } catch (Exception e) {
            System.out.println("Error creating directory: " + pathToCreate + ". Reason: " + e.getMessage());
        }
    }
}
```

### Explanation:
1. **Input Validation**: The code checks if the number of arguments is exactly one and prints a usage message if not.
2. **Path Creation**: It creates a `Path` object from the input string.
3. **Directory Check and Creation**:
   - It checks if the directory already exists using `Files.exists(directoryPath)`.
   - If it doesn't exist, it tries to create the directory using `Files.createDirectories(directoryPath)`. This method will also handle creating any missing parent directories.
4. **Exception Handling**: Any exceptions during directory creation are caught and an error message is printed.

This Java code should behave similarly to the provided C++ code, handling the creation of a directory and its parents recursively, with appropriate success or failure messages.
