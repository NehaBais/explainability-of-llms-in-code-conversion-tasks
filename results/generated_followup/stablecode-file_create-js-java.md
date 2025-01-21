Error: `/tmp/Main.java:22: error: ';' expected`

Fix: Replace the incorrect usage of semicolons with correct ones.

Corrected Code:
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
        Files.write(Paths.get("output.txt"), "".getBytes()));
        fct(null);
        System.out.println();


        // Create a root level file and directory
        Path root = Paths.get("/"));

        if (Files.notExists(root))) {
            try {
                Files.createDirectories(root));
            } catch (IOException e) {
                e.printStackTrace();
            }
        }


        // Create a file in the root directory
        Files.write(Paths.get("/output.txt"), "".getBytes()));
        fct(null);
        System.out.println();


        // Create an empty directory named "docs" at root ("/") directory
        try {
            Files.createDirectory(Paths.get("/docs"))));
        } catch (IOException e) {
            e.printStackTrace();
        }

        fct(null);
    }
}
```
