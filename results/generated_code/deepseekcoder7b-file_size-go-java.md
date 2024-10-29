The Java version of the code would look like this:

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.IOException;

public class Main {
    public static void printFileSize(String filename)  {
        try{
            File file = new File(filename);
            if(!file.exists()){
                System.out.println("The file does not exist");
            } else {
                long size = Files.size(Paths.get(filename));
                System.out.println(size);
            }
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }   
    }
    
    public static void main(String[] args)  {
        printFileSize("input.txt");
        //On Windows, it would probably be something like C:\input.txt or \\?\C:\input.txt
        //But on Unix systems you need to provide full path: /input.txt
    }
}
```
Note that Java does not have a direct equivalent of Go's `os.Stat` function, so we use the `Files.size(Paths.get(filename))` method instead which retrieves file size in bytes. Also keep in mind to provide correct path for the files depending on whether you are running this from a Unix or Windows system.

