The equivalent code in Java would be:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    /* Check for regular file */
    static boolean checkReg(String path) { 
        File file = new File(path);
        return file.exists() && file.isFile();  
    }

    /* Check for directory */
    static boolean checkDir(String path) {
        File file = new File(path);
        return file.exists() && file.isDirectory(); 
    }

    public static void main(String[] args) throws IOException {
        System.out.println("input.txt is a regular file? " + (checkReg("input.txt") ? "yes" : "no"));
        System.out.println("docs is a directory? " + (checkDir("docs") ? "yes" : "no"));
        System.out.println("/input.txt is a regular file? " + (checkReg("/input.txt") ? "yes" : "no"));
        System.out.println("/docs is a directory? " + (checkDir("/docs") ? "yes" : "no"));
    }
}
```
This Java code does the exact same thing as the C code. It checks if the given file or directory exists, and if it's a regular file or a directory. The difference is that in the C version we are operating at the filesystem level, while in the Java version we are using java.io API.
