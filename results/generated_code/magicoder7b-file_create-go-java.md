 Below is the equivalent Java code for your Golang program:

Please note that in Java, we don't have direct methods like `os.Create` to create a file or `os.Mkdir` to create a directory as compared to Go. Instead, we use either java.io.File class or java.nio.file.Paths for these operations:

```java
import java.io.*;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException {
        createFile("input.txt");
        createFile("/input.txt");
        createDir("docs");
        createDir("/docs");
    }

    private static void createFile(String fn) throws IOException {
        File file = new File(fn);
        if (!file.exists()) {
            file.createNewFile();
            System.out.println("File " + fn + " created!");
        } else {
            System.out.println("File " + fn + " already exists.");
        }
    }

    private static void createDir(String dn) throws IOException {
        Path path = Paths.get(dn);
        if (!Files.exists(path)) {
            Files.createDirectory(path);
            System.out.println("Directory " + dn + " created!");
        } else {
            System.out.println("Directory " + dn + " already exists.");
        }
    }
}
```
Remember that you will need to add the throws IOException in your function declaration because creating a new File or Directory may throw an IOException if the operation fails for some reason (like lack of permissions, insufficient storage space, etc.)
