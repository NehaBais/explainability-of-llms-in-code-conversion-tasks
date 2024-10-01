This is a straightforward conversion of the given C code to Java using the Apache Commons IO library. The following Java class provides equivalent functionality:
```java
import org.apache.commons.io.FileUtils;
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
public class Main {
    public static void main(String[] args) throws Exception {
        Path filePath = Paths.get("input.txt");
        if (Files.exists(filePath)) {
            System.out.println(FileUtils.sizeOf(new File("input.txt")));
        } else {
            throw new Exception("File not found: input.txt");
        }
        System.out.println(FileUtils.sizeOf(new File("/input.txt")));
    }
}
```
This Java class uses the following external libraries and dependencies:
* org.apache.commons:commons-io - v2.13
* java.nio.file - NIO.2
* org.slf4j:slf4j-api - v2.0.6 (for logging)
