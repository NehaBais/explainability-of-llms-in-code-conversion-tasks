Here is the Java equivalent of your C++ code: 

Firstly, note that java.nio.file package replaces the outdated java.io.File in terms of file operations. The Paths class provides methods for manipulating paths and the Files class contains a series of utility methods covering file access and manipulation aspects.

```java
import java.nio.file.*;
import static java.nio.file.Files.exists;

public class Main {
    static void fileExists(Path path) throws Exception {
        System.out.print(path);
        if ( exists(path) ) {
            if ( Files.isDirectory(path) ) { 
                System.out.println(" is a directory"); 
            } else { 
                System.out.println(" exists with a file size of " + Files.size(path) + " bytes.");  
            } 
        } else {
             System.out.println(" does not exist"); 
        }
    }   
    public static void main(String[] args) throws Exception{
       fileExists(Paths.get("input.txt"));
	   fileExists(Paths.get("zero_length.txt"));
	   fileExists(Paths.get("docs/input.txt"));
	   fileExists(Paths.get("docs/zero_length.txt"));
       // Repeat the process for root directory
	   fileExists(Paths.get("/", "input.txt"));  
	   fileExists(Paths.get("/", "zero_length.txt")); 
	   fileExists(Paths.get("/", "docs/input.txt"));    
       fileExists(Paths.get("/", "docs/zero_length.txt"));
     } 
 }
```

Please note that Java does not provide built-in support for zero length files or directories. You will need to create these manually with some form of script or custom code. Also, the root directory might differ from one machine to another so it's best to specify them directly in your source file.
