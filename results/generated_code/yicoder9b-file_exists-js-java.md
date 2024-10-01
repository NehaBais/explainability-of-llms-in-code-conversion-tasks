In Java, the equivalent code for your requirement would be:

Checking if a file exists in current directory and root directory: 
```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // Checks if input.txt exists in the current working directory
        System.out.println(new File("input.txt").exists()); 

        // Checks if input.txt exists at root directory of your filesystem (C:\ for Windows)
        System.out.println(new File("c:/input.txt").exists());

        // Checks if the 'docs' directory exists in your current working directory
        System.out.println(new File("docs").isDirectory()); 

        // Checks if the 'docs' directory exists at root directory of your filesystem (C:\ for Windows)
        System.out.println(new File("c:/docs").isDirectory()); 
    }  
}
```

In order to run these Java programs, you should have the JDK installed on your computer and be familiar with the Java syntax.
