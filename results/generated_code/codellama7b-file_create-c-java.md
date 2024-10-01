 Here is the converted code in Java:
```
import java.io.*;
import java.nio.file.*;
import static java.nio.file.StandardOpenOption.*;

public class FileCreation {
    public static void main(String[] args) throws IOException {
        // Create empty file "output.txt" in current working directory with size 0 bytes
        Path path = Paths.get("output.txt");
        Files.createFile(path, CREATE, WRITE);

        // Create empty directory "docs" in current working directory with permissions 0750
        Path dirPath = Paths.get("docs");
        File file = new File(dirPath.toString());
        if (!file.mkdir()) {
            System.out.println("Error creating directory");
        } else {
            System.out.println("Directory created successfully");
        }

        // Create empty file "output.txt" in filesystem root with size 0 bytes
        path = Paths.get("/").resolve(path);
        Files.createFile(path, CREATE, WRITE);

        // Create empty directory "docs" in filesystem root with permissions 0750
        dirPath = Paths.get("/").resolve(dirPath);
        file = new File(dirPath.toString());
        if (!file.mkdir()) {
            System.out.println("Error creating directory");
        } else {
            System.out.println("Directory created successfully");
        }
    }
}
```
Note: This code uses the `java.nio` API for file creation and manipulation, which is a more modern and efficient way of working with files in Java compared to using the `File` class or the `FileInputStream`/`FileOutputStream` classes.
