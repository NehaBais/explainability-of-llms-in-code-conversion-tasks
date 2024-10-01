In Java the equivalent code would be:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        createEmptyFilesAndDirs(""); // creates files/dirs in the current working directory
        createEmptyFilesAndDirs("/"); // creates files/dirs at root of filesystem
    }

    private static void createEmptyFilesAndDirs(String path) throws IOException {
        File file1 = new File(path + "output.txt");
        file1.createNewFile(); 

        File dir1 = new File(path + "docs");
        dir1.mkdir();
    }
}
```

The `File` class in Java is used to interact with the file system and create files or directories. The `createNewFile()` method creates a new, empty file and the `mkdir()` method creates an empty directory.

Please note that throwing IOException can be avoided if you wrap the code inside a try-catch block when creating a new file because createNewFile() throws IOException. But I have left it as is to maintain similarity with C++ version where a file could also throw an exception during creation.
