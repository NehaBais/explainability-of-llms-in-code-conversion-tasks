The error occurs because of incorrect usage of escape characters (\s, \u2581) in System.out.println statement, which are not valid Java syntax. 

To fix this, we need to replace these escape sequences with the correct ones representing single character literals - 's' and 'I'.

Here is the corrected code:
```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws Exception{
        Path path = Paths.get("./path/to/dir");
        System.out.println(mkdirp(path));
     }

    public static boolean mkdirp(Path p) throws Exception {
        if (Files.exists(p)) {  // Directory already exists, nothing to do return true
            return true;
         } else { 
           try{
               Files.createDirectories(p);  // Create directory and any missing parents
               return true;
             }catch(FileAlreadyExistsException e){
                System.out.println("Directory already exists");
                return false;
             } catch (IOException ex) { 
                 System.err.println("Error creating directory: " + p);
                 return false;
             }  
          }
       }
}
```
This code will correctly handle the exceptions and also print a message when a 'Directory already exists' exception occurs, as expected by the provided JavaScript function.

