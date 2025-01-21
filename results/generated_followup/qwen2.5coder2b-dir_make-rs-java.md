The error message indicates that the compiler cannot find the `Files` and `Paths` classes, which are part of the Java NIO API. This is because these classes were introduced in Java 8.

To fix this issue, you need to add a dependency on Java 8 or later versions of Java. Here is how you can do it:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String dirPath = "./path/to/dir";
    try {
      Files.createDirectories(Paths.get(dirPath));
    } catch (IOException e) {
      System.err.println("An Error Occured: " + e.getMessage());
    }
  }
}
```

This code block creates the directory with its parent directories using `java.nio.file.Files.createDirectories()` method. It also includes error handling to print out the error message if something goes wrong during the process.
