Your code in Java would look like this:

```Java
import java.io.File;
import java.nio.file.*;

public class Main {
    
    private static void printStat(String path) {
        File f = new File(path);
        
        if (f.exists()) {
            if (f.isDirectory()) {
                System.out.println(path + " is a directory");
            } else {
                System.out<｜begin▁of▁sentence｜>.prinln(path + " is a file");
            }
        } else {
            System.out.println("Path does not exist: " + path);
        }
    }
    
    public static void main(String[] args)  {
        printStat("input.txt");
        
        Path root = FileSystems.getDefault().getRootDirectories().iterator().next();
        printStat(root.resolve("input.txt").toString());
        
        printStat("docs");
        
        printStat(root.resolve("docs").toString());
    }
}
```
The Java code does pretty much the same thing as your Golang code: it checks if a file or directory exists, and prints out whether it's a file or a directory. However, note that in java, there is no direct equivalent to Golang's `os.Stat()` function which gives information about a file/directory but also unlike Golang, it doesn't handle exceptions well. Instead, we use the File object's `exists()` and `isDirectory()` methods to achieve the same purpose as in your Golang code. 
Also note that Java does not have built-in support for getting root directory paths like os.Stat or ioutil in GoLang, hence you need to use java.nio.file package's Path and FileSystem classes instead.

