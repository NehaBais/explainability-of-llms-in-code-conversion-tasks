The following Java code does the same as your Golang code. It creates an empty file and directory in the current working directory and root respectively:

```java
import java.io.File;
import java.io.IOException;

public class Main {

    public static void main(String[] args) {
        createFile("input.txt");
        createDir("docs");
    }

    private static void createFile(String fn) {
        try {
            new File(fn).createNewFile();
            System.out.println("file " + fn + " created!");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void createDir(String dn) {
        try {
            new File(dn).mkdirs();
            System.out.println("directory " + dn + " created!");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

}
```

In the Java version, we use `java.io.File`'s `createNewFile()` and `mkdirs()` methods to create a file and directory respectively. Note that in Java, paths starting with "/" are absolute paths from the root of the filesystem, whereas in Golang they would refer to the current working directory. 

Both Java and Golang use the native system calls to create directories and files, so there shouldn't be any special handling required for permissions or other system-specific issues.
