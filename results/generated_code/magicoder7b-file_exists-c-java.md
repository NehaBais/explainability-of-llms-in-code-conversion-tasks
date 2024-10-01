 Below is the Java equivalent of your C code. The java.nio package is used to perform file and directory existence checks:

```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Path currentDirectory = FileSystems.getDefault().getPath(".");
        System.out.println("input.txt is a regular file? " + Files.isRegularFile(currentDirectory.resolve("input.txt")));
        System.out.println("docs is a directory? " + Files.isDirectory(currentDirectory.resolve("docs")));
        
        Path rootDirectory = FileSystems.getDefault().getPath("/");
        System.out.println("/input.txt is a regular file? " + Files.isRegularFile(rootDirectory.resolve("input.txt")));
        System.out.println("/docs is a directory? " + Files.isDirectory(rootDirectory.resolve("docs")));
    }
}
```
