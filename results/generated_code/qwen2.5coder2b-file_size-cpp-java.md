The equivalent code in Java would be:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class Main {
    public static void main(String[] args) throws IOException {
        Path path1 = Path.of("input.txt");
        Path path2 = Path.of("/input.txt");

        System.out.println("Size of file " + path1.getFileName() + " is " + Files.size(path1).toString() + " bytes.");
        System.out.println("Size of file " + path2.getFileName() + " is " + Files.size(path2).toString() + " bytes.");
    }
}
```

In this Java code, we use the `Files.size` method which returns the size of a file in bytes. The `Path.of` class is used to create paths from string literals.
