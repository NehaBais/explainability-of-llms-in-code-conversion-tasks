Below is the equivalent Java code for your Python script:

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {

    public static void create(String directory) throws Exception{
        // Create the output file in specified directory.
        File outputFile = new File(directory, "output.txt"));
        outputFile.createNewFile();

        // Create an empty dir in specified directory.
        File docsDir = new File(directory, "docs"));
        if(!docsDir.exists()) {
            docsDir.mkdirs();
        }
    }

    public static void main(String[] args) throws Exception{
        create("."));  // current directory
        create("/");   // root directory
    }
}
```
The Python script uses the `os` and `with_statement` modules. The Java code does something similar, using the `java.io.File` and `java.nio.file.Files` classes from the standard library.
