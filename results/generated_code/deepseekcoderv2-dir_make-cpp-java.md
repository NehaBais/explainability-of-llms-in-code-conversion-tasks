### Solution in Java
```java
import java.nio.file.*;
import static java.nio.file.StandardCopyOption.REPLACE_EXISTING;

public class Mkdir {
    public static void main(String[] args) throws IOException {
        Path newDir = Paths.get("path/to/new-directory");
        
        if (!Files.exists(newDir)) {
            Files.createDirectories(newDir);
        } else {
            System.out.println("Directory already exists.");
        }
    }
}
```
