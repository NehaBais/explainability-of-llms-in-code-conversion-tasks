Here is your Python code converted to Java:

```Java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File file = new File("input.txt");
        long size = file.length();
        
		// For the file in the root directory, you have to provide an absolute path instead of a relative one
        File rootFile = new File("/input.txt"); 
        long rootSize = rootFile.length();  
    }
}
```
In Java, the `java.io.File` class provides methods for getting information about files and directories. In this case it's used to get size of a file in bytes using `file.length()` method which returns length of file in bytes. For absolute path starting from root directory, we use '/input.txt', as Java takes paths relative to the project root when one starts with "/".

