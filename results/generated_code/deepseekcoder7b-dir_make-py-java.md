Below is your Python code converted to Java:

In the below given code we are using `Files` from java.nio library for checking and creating directories cross-platformly. 

This method will create directory if it does not exist, and parent directories as well. 
```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        String path = "./path/to/dir"; // replace with your directory path
        mkdirp(path);
    }
    
    private static void mkdirp(String path){
        try{
            Files.createDirectories(Paths.get(path));
        }catch (IOException e){
            System.err.println("Unable to create directories: " + e.getMessage());
        }
    }
}
``` 
This Java code will check if the directory exists and if not it will recursively create parent directories along with the target directory. 

You just have to replace `"path/to/dir"` with your desired path, and run this program from a main method or any other context where you want to use this function. If the directory already exists, this function simply returns without doing anything. In case of an I/O error while creating directories it will print the exception message on standard error output.

