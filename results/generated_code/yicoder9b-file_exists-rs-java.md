Here's how you can convert the Rust code to Java.
For this conversion, we will use java nio Path and Files API:

```java
import java.nio.file.*;
import static java.nio.file.Files.*;

public class Main {
    public static void main(String[] args) throws Exception{
        for (String file : new String[]{"input.txt", "docs", "/input.txt", "/docs"}){
            if (exists(Paths.get(file))){
                if (isDirectory(Paths.get(file))) {
                    System.out.println(file + " is a directory");
                } else {
                    System.out.println(file + " is a file");
                } 
            }else{
                 System.out.println(file+ " does not exist");  
             }      
        }   
     }
 }
```
This Java code performs the same task as your Rust code - checking if specified files and directories exist in the current working directory, then again for a file/directory in the root of the filesystem. If they do exist it prints whether they are a file or a directory.
