Here's the equivalent Java code:
```java
import java.nio.file.Files;
import java.nio.file.Paths;
public class Main {
 public static void main(String[] args) {
 long size1 = Files.size(Paths.get("input.txt"));
 long size2 = Files.size(Paths.get("/input.txt"));
 System.out.println("Size of input.txt in current directory: " + size1 + " bytes");
 System.out.println("Size of input.txt in file system root: " + size2 + " bytes");
 }
}
```
Note that the `Files` class from the `java.nio.file` package is used to get the size of a file, and the `Paths.get()` method is used to create a `Path` object representing the file path. The size of the file in bytes is returned by calling the `size()` method on the `Path` object.

