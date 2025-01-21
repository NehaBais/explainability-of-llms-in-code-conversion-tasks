 The error is occurring because Java does not have a direct method to retrieve file attributes like size or last modified time using `Files.readAttribute()` method as JavaScript ActiveXObject does. 

Fix: Use Files.size() method that is available in the java.nio.file package which can get the size of a file.

Corrected code:
```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Size of input.txt in current directory : " + Files.size(Paths.get("input.txt")));
        System.out.println("Size of c:/input.txt : " + Files.size(Paths.get("c:\\input.txt")));
    }
}
```
This code reads the size of files named input.txt in the current directory and in the root directory (c:\input.txt). If you have a different file name or location, adjust the string passed to Paths.get() accordingly. 

The `Files.size()` method retrieves the size of a specific file. It returns the size of the target file as an integer number of bytes.
