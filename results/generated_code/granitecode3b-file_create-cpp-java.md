Here's the equivalent Java code for the given C++ code snippet:
```java
import java.io.fstream;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
public class FileManipulator {
    public static void main(String[] args) throws Exception {
        try (fstream f = new fstream("output.txt", true)) {}
        Files.createFile(FileSystems.getDefault().getPath("output.txt"));

        Path docsPath = FileSystems.getDefault().getPath("docs");
        Files.createDirectory(docsPath);
    }
}
```
In this Java code, we first create a new file called "output.txt" using the `fstream` class and then use the `Files.createFile()` method from the `java.nio.file` package to create a new empty file with the same name in the default file system. 
We also create an empty directory called "docs" by calling the `Files.createDirectory()` method on the path of the directory, which is obtained using `FileSystems.getDefault().getPath("docs")`. 
Note that the `fstream` class is used instead of the standard Java `File` class because we need to open and close the file stream manually in C++.

