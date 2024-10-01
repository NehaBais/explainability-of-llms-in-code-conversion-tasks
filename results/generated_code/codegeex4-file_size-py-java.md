In Java, you can use `java.nio.file` package's `Path`, `Files` classes to get size of a file. You can refer below code:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        try {
            // For file in the current working directory
            Path path1 = Paths.get("input.txt");
            long size1 = Files.size(path1);
            System.out.println("Size of input.txt in current directory: " + size1);

            // For file in the file system root
            Path path2 = Paths.get("/input.txt");
            long size2 = Files.size(path2);
            System.out.println("Size of input.txt in file system root: " + size2);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

Please note, `Files.size(Path path)` throws IOException if an I/O error occurs. To handle this exception, we used try-catch block.

Also, to find out the current working directory, you can use `System.getProperty("user.dir")`.

If "/input.txt" is not a valid file path (which it probably isn't), you will need to correct that.
