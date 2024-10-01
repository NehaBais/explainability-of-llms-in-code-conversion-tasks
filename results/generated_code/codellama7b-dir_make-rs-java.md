 Here is the converted code in Java:

```java
import java.io.*;
import java.nio.file.Files;
import static java.nio.file.StandardCopyOption.REPLACE_EXISTING;

public class MkdirAll {
    public static void main(String[] args) throws IOException {
        String path = "./path/to/dir";
        if (!Files.exists(Paths.get(path))) {
            Files.createDirectories(Paths.get(path));
        }
    }
}
```