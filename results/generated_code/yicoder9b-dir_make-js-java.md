Here's a Java equivalent for your JavaScript code using NIO library functionalities:

```java
import java.nio.file.*;
import static java.nio.file.StandardCopyOption.*;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        mkdirp("./path/to/dir"); 
    }

    static void mkdirp(String p) throws IOException{
        Path path = Paths.get(p);

        try {
            Files.createDirectories(path);
        } catch (IOException e) {
           if (e instanceof NoSuchFileException) {
               // The parent directory does not exist, create it and try again
               mkdirp(new File(path.getParent().toString()).getParent()); 
               mkdirp(p); 
           } else {
               throw e; // re-throw the exception if it's another type of IOException
           }
        }
    }
}
```
In this code, `Files.createDirectories` is used to create directory and its parent directories recursively. If any I/O error occurs or the file already exists as a non-directory then an IOException will be thrown which is caught in the catch block and if it's of type NoSuchFileException, we know that parent directory doesn’t exist so make it and try again otherwise rethrow the exception.
