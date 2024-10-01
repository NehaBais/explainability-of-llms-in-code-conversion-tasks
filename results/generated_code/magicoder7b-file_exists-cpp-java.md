 In Java, the equivalent code would look like this:

```java
import java.nio.file.*;
import java.nio.file.attribute.*;

public class Main {
    public static void main(String[] args) {
        try {
            checkExistence("input.txt");
            checkExistence("/zero_length.txt");  // assuming / denotes the root directory of your filesystem
            checkExistence("docs/input.txt");
            checkExistence("docs/zero_length.txt");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    public static void checkExistence(String pathStr) throws Exception {
        Path path = Paths.get(pathStr);
        if (Files.exists(path)) {
            if (Files.isDirectory(path)) {
                System.out.println(path + " is a directory.");
            } else {
                long size = Files.size(path);
                System.out.println(path + " exists with a file size of " + size + " bytes.");
            }
        } else {
            System.out.println(path + " does not exist.");
        }
    }
}
```

Please note that the root path is `/` in Unix-like operating systems like Linux or macOS, but it would be `C:\` for Windows.
