Sure, here is the equivalent Java code for the above Rust functionality:

```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) {
        try {
            Path dir = Paths.get("./path/to/dir");
            if (!Files.exists(dir)) {
                Files.createDirectories(dir);
            }
        } catch (Exception e) {
            System.out.println("An Error Occured! " + e.getMessage());
        }
    }
}
```
This Java code does the same thing as the Rust one: it creates a directory and any missing parent directories. If the directory already exists, this function will do nothing. The main difference is that the Paths class from the java.nio package is used to create and check for existing files/directories which are similar to `fs` module in rust but with better cross-platform compatibility.
