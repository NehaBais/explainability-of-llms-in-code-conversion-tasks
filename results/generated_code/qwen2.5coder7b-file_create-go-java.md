Here is the equivalent code in Java:

```java
import java.io.File;
import java.io.IOException;

public class Main {

    public static void main(String[] args) {
        try {
            // Create empty file here and root directory
            createFile("input.txt");
            createFile("/input.txt");
            createDir("docs");
            createDir("/docs");

        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }

    public static void createFile(String filePath) throws IOException {
        File file = new File(filePath);
        if (!file.createNewFile()) {
            throw new IOException("Error creating file: " + filePath);
        }
        System.out.println("File " + filePath + " created!");
    }

    public static void createDir(String dirPath) throws IOException {
        File directory = new File(dirPath);
        if (!directory.mkdir()) {
            throw new IOException("Error creating directory: " + dirPath);
        }
        System.out.println("Directory " + dirPath + " created!");
    }
}
```

This Java code will attempt to create an empty file and an empty directory at the specified paths, both in the current working directory and the root filesystem. If it fails (for example, if the directory already exists or you don't have permission), it throws an IOException with a descriptive error message.
