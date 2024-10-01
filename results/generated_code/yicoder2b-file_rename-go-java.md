The equivalent Java code for the given Golang program is as follows:

```java
import java.nio.file.*;
import static java.nio.file.StandardCopyOption.REPLACE_EXISTING;

public class Main {
    public static void main(String[] args) throws Exception {
        Path inputFilePath = Paths.get("input.txt");
        if (Files.notExists(inputFilePath)) {
            throw new IllegalArgumentException("No such file: " + inputFilePath);
        }
        Files.move(inputFilePath, inputFilePath.resolveSibling("output.txt"), REPLACE_EXISTING);

        Path docsDir = Paths.get("docs");
        if (!Files.exists(docsDir)) {
            throw new IllegalArgumentException("No such directory: " + docsDir);
        }
        Files.move(docsDir, docsDir.resolveSibling("mydocs"), REPLACE_EXISTING);

        Path rootInputFilePath = Paths.get("/input.txt");
        if (!rootInputFilePath.equals(Paths.get(System.getProperty("user.dir")).resolve(rootInputFilePath))) {
            Files.move(rootInputFilePath, rootInputFilePath.toAbsolutePath().resolveSibling("output.txt"), REPLACE_EXISTING);
        } else {
            System.out.println("Cannot move file in current working directory.");
        }

        Path rootDocsDir = Paths.get("/docs");
        if (!rootDocsDir.equals(Paths.get(System.getProperty("user.dir")).resolve(rootDocsDir))) {
            Files.move(rootDocsDir, rootDocsDir.toAbsolutePath().resolveSibling("mydocs"), REPLACE_EXISTING);
        } else {
            System.out.println("Cannot move directory in current working directory.");
        }
    }
}
```
