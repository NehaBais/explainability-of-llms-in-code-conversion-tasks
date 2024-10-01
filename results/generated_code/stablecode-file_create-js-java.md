Below is the Java equivalent of your JavaScript code:

This Java version will create an empty file named "output.txt" in current working directory, and again an empty file named "output.txt" at root ("/") directory. It also creates an empty directory named "docs" in the current working directory, and a similar empty directory named "docs" at root ("/") directory.

```java
import java.io.IOException;
import java.nio.file.*;

public class Main {

    static void fct(FileException e) {
        if (e != null) {
            System.out.println(e);
        }
    }


    public static void main(String[] args) throws IOException, InterruptedException {

        // Create a file in the current working directory
        Files.write(Paths.get("output.txt"), "".getBytes());
        fct(null);
        System.out.println();


        // Create a root level file and directory
        Path root = Paths.get("/"));

        if (Files.notExists(root))) {
            try {
                Files.createDirectories(root);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        // Create a file in the root directory
        Files.write(Paths.get("/output.txt"), "".getBytes()));
        fct(null);
        System.out.println();


        // Create an empty directory in the root directory
        try {
            Files.createDirectory(Paths.get("/docs")));
        } catch (IOException e) {
            e.printStackTrace();
        }

        fct(null);
    }
}
```
This is a simple java program that performs the required file operations - writing an empty file to current working directory and root ("/") directory, and creating an empty directory in both directories.
