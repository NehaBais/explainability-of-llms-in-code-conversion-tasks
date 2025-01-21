Here is the equivalent code in Java:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {

        // For the current working directory
        File file1 = new File("input.txt");
        System.out.println(file1.exists() && file1.isFile()); 

        File dir1 = new File("docs");
        System.out.println(dir1.exists() && dir1.isDirectory());

        // For a file and a directory in the filesystem root
        String rootPath = System.getProperty("file.separator");  // get the system's file separator
        
        File file2 = new File(rootPath + "input.txt");
        System.out.println(file2.exists() && file2.isFile()); 

        File dir2 = new File(rootPath + "docs");
        System.out.println(dir2.exists() && dir2.isDirectory());
    }
}
```

The `exists()` method returns true if this abstract pathname refers to an existing file or directory, false otherwise.

The `isFile()` method returns true if and only if the file denoted by this pathname is a normal file.

The `isDirectory()` method returns true if and only if the file denoted by this abstract pathname is a directory. 

Please note that in Java, unlike Python, you need to handle exceptions when dealing with file operations.
