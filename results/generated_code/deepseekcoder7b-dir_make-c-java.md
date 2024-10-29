Below is the equivalent Java code for your C program. The same functionality in Java would be achieved using `Files.createDirectories()` method provided by Java NIO API. This method creates a new directory and its parents, if they do not exist. 

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        String path = "./path/to/dir";  // replace this with your directory path
        
        try {
            Files.createDirectories(Paths.get(path));
        } catch (IOException e) {
            System.err.println("Couldn't create directories: " + path);
            e.printStackTrace();
        }
    } 
}
```
In the above Java code, if any of the parents doesn't exist it creates them as well. If a directory or one of its parent directories exists already then `Files.createDirectories()` will not raise an exception. So effectively this function can return successfully even if the directory already exists. It works equally well across platforms because Java is cross-platform language and uses same APIs on all major operating systems including Windows, Linux and MacOS.

