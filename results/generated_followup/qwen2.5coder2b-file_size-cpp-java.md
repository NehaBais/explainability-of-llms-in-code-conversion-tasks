The error is due to the fact that `Files.size` method returns an instance of `Long`, which cannot be dereferenced. 

To fix this, we can use the `toString()` method to convert the `Long` object to a string.

Here's the corrected code:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class Main {
  public static void main(String[] args) throws IOException {
    Path path1 = Path.of("input.txt");
    Path path2 = Path.of("/input.txt");

    System.out.println(
        "Size of file " + path1.getFileName() + " is " + Files.size(path1).toString() + " bytes.");
    System.out.println(
        "Size of file " + path2.getFileName() + " is " + Files.size(path2).toString() + " bytes.");
  }
}
```
