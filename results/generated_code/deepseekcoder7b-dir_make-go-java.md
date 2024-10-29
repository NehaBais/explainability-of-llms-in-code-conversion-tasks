Below is an equivalent Java code using `Files` and `Paths` from java.nio package to perform the same operation as given Golang code. Please note that this will work only if your project has permissions to create directories on the system. 

Also, you would need a recent version of JDK (Java Development Kit) to run this program since `Files.createDirectories()` was introduced in Java 7 and Files API is a part of NIO package that came with Java 7.
```java
import java.io.IOException;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) {
        createDirWithMissingParents("/tmp/some/path/to/dir");
    }
  
    private static void createDirWithMissingParents(String path){
        Path dir = Paths.get(path);
        
        try {
            Files.createDirectories(dir);
        } catch (IOException e) {
            System.err.println("Failed to create directory " + path);
            e.printStackTrace();
        } 
    }
}
```

This Java program will attempt to create a directory at the given path and any missing parents in the same way as the Golang `os.MkdirAll()` function. If it's able to do so, it prints "Successfully created" followed by the path; if not, it catches the IOException and prints out the stack trace for debugging purposes.

Please replace "/tmp/some/path/to/dir" with your actual directory. It can be an absolute or relative path based on where you want to create this directory. 

This code will work cross-platform as it utilizes Java's built-in libraries that are designed to run the same way across different operating systems. As such, all the operations are performed using abstract paths and access control lists in place of actual files or directories, providing a platform-independent interface for those operations.

