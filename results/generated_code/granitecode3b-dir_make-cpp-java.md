Sure, here's the Java code that achieves the same result as the C++ code:
```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class MkdirP {
 public static void main(String[] args) throws IOException {
 if (args.length < 1) {
 System.err.println("usage: mkdir <path>");
 return;
 }
 Path pathToCreate = Paths.get(args[0]);
 if (Files.exists(pathToCreate)) {
 System.out.printf("%s already exists%n", pathToCreate);
 return;
 }
 Files.createDirectories(pathToCreate);
 }
}
```
The Java code uses the `Files` class to create the directory and its missing parents. It checks if the directory exists before attempting to create it, and prints an error message if it already exists.

