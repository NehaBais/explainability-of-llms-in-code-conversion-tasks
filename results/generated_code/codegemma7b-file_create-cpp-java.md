```java
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class FileAndDirectoryCreation {

    public static void main(String[] args) throws IOException {
        // Create "output.txt" in the current working directory
        File file = new File("output.txt");
        file.createNewFile();

        // Create "/output.txt" in the filesystem root
        Path path = new File("/output.txt").toPath();
        Files.createFile(path);

        // Create "docs" directory in the current working directory
        new File("docs").mkdir();

        // Create "/docs" directory in the filesystem root
        Path directoryPath = new File("/docs").toPath();
        Files.createDirectory(directoryPath);
    }
}
```

