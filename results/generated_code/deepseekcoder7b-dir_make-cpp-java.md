Below is the equivalent Java code for creating a directory and any missing parents (equivalent to `mkdir -p` in Unix) using the java.nio.file API:

```java
import java.io.IOException;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            System.exit(-1);
        }

        String pathToCreate = args[0];
        
        // Check if directory already exists
        if(Files.exists(Paths.get(pathToCreate))) {
        	System.out.println("Directory " + pathToCreate + " already exists");
        	return;
        } 

        try {
            Files.createDirectories(Paths.get(pathToCreate));
        } catch (FileAlreadyExistsException e) {
            // This is okay, because createDirectories will not throw an exception if the directory already exists
        } catch (IOException e) {
            System.out.println("Couldn't create directory: " + pathToCreate);
            System.exit(-1);
        }
    }
}
``` 
This code works identically across different platforms because it uses the java.nio.file API, which is a part of Java’s standard library and is implemented in terms of the underlying file system's native functions (which means that it will work on any platform where JVM runs).

