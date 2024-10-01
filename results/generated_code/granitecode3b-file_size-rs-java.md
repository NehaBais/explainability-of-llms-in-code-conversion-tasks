Sure, here's the Java equivalent of the Rust code:
```java
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileSizeChecker {
 public static void main(String[] args) {
 String fileName = args[0];
 try {
 Files.size(Paths.get(fileName));
 System.out.println("File size: " + Files.size(Paths.get(fileName)) + " bytes");
 } catch (IOException e) {
 System.err.println("Error reading file size: " + e.getMessage());
 }
 }
}
``` 
Note that the Java code uses the `Files` and `Paths` classes from the `java.nio.file` package to work with files. The `main()` method takes a single argument, which is the path of the file to check its size for. If an error occurs while reading the file size, the program prints an error message to `stderr`.

