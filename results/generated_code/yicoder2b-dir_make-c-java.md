This is the equivalent Java code for the given C code. Please note that this Java version does not include error handling and assumes that the required parent directories already exist:

```java
import java.io.*;

public class Main {
    
    public static void main(String[] args) throws IOException {
        if (args.length != 1){
            System.err.println("usage: java Main <path>");
            return;
        }
        createDirectoryAndParents(args[0]);
    }

    private static void createDirectoryAndParents(String path) throws IOException {
        File parentDir = new File(path).getParentFile();
        if (parentDir != null && !parentDir.exists()){
            createDirectoryAndParents(parentDir.getPath());
        }
        new File(path).mkdir();
    }
}
```
This code includes the necessary library for handling paths and file operations in Java, then implements a `main` function which receives the path to create as its argument. It creates parent directories if they don't exist yet using recursion. It checks if the directory already exists before trying to create it, and if not, it will throw an exception when trying to create it. If the directory is found but isn't a directory (i.e., it exists but is not a directory), the code will also throw an exception when trying to create it again.
