 Here is the equivalent Java code for the provided C code. This implementation creates a directory and any missing parents, mimicking the behavior of the `mkdir -p` command.

```java
import java.io.File;

public class Mkdir {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("usage: java Mkdir <path>");
            System.exit(1);
        }

        String path = args[0];
        File file = new File(path);

        // Split the path by '/' and create each directory in the path
        String[] parts = path.split("/");
        StringBuilder currentPath = new StringBuilder();

        for (String part : parts) {
            if (!part.isEmpty()) {
                currentPath.append(part);
                File dir = new File(currentPath.toString());
                if (!dir.exists() && !dir.mkdir()) {
                    System.err.println("Failed to create directory: " + path);
                    System.exit(1);
                }
                currentPath.append("/");
            }
        }
    }
}
```

### Explanation:
1. **Argument Check**: The program first checks if the correct number of arguments is provided. If not, it prints a usage message and exits with status `1`.
2. **File Object Creation**: A `File` object is created for the given path.
3. **Path Splitting**: The path string is split by the `/` character to handle each directory component individually.
4. **Directory Creation**: For each part of the path, a new `File` object is created. If the directory does not exist and cannot be created (`mkdir()` returns `false`), an error message is printed, and the program exits with status `1`.
5. **Current Path Update**: The current path is updated by appending the next part until all parts are processed.

This Java code should behave similarly to the provided C code in terms of creating directories and their parents as needed.
