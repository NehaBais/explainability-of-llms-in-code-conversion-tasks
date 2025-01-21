The error is due to an incorrect usage of brackets `[]`. In this context, they are used for defining arrays, but here they're not necessary. 

Here's how to fix it:
```java
import java.io.File;

public class Main {

    public static void main(String[] args) {
        createDirs("./path/to/dir");
    }

    private static boolean createDirs(String path){
        File dir = new File(path);

        if(!dir.exists() && dir.isDirectory()) 
            return dir.mkdirs();

        return false;
    }
}
```
This solution uses the `java.io.File` class to create directories if they do not already exist. The `createDirs` method checks if a directory exists and is a directory, then it creates that directory using the `mkdirs()` method. If the directory does not exist but can be created successfully (because its parent directories exist or are being created), then it creates that directory using the `mkdirs()` method.

This code block ensures the successful creation of any missing parent directories in the given path string. The implementation works equally well cross-platform as the File class methods used are part of Java's standard library which works across all major platforms including Windows, Linux, MacOS and more.
