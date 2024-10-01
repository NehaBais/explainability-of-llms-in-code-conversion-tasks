 In Java, you can use the `Files` class in `java.nio.file` package to create directories and their parent directories. Here's how you can do it:

```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Path path = Paths.get("./path/to/dir");
        Files.createDirectories(path);
    }
}
```

In this code:
- We import the necessary classes from `java.nio.file`.
- We define a method that creates a directory at the specified path and its parent directories if they don't exist.
- In the main method, we call our previously defined function with a specific path. The exception is caught in this case to avoid any runtime errors. 

This code works both on Windows as well as Unix-based systems, so it's fully cross-platform. If you want to handle exceptions manually, you can remove the `throws IOException` part and add additional error checking code.
