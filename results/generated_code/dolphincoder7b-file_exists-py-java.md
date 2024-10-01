Java does not have built-in functions for file and directory manipulation, like Python's os module. Therefore, there is no direct equivalent for the provided Python code in Java. However, you can achieve similar functionality using Java's built-in File and Files classes. 

Here is how to translate the Python code to Java:
```java
import java.io.*;

// Check if input.txt exists in current working directory
File f1 = new File("input.txt");
if (f1.exists() && !f1.isDirectory()) {
    System.out.println("File exists.");
} else {
    System.out.println("File does not exist or is a directory.");
}

// Check if /input.txt exists in the filesystem root
File f2 = new File("/input.txt");
if (f2.exists() && !f2.isDirectory()) {
    System.out.println("File exists.");
} else {
    System.out.println("File does not exist or is a directory.");
}

// Check if docs directory exists in current working directory
File f3 = new File("docs");
if (f3.exists() && f3.isDirectory()) {
    System.out.println("Directory exists.");
} else {
    System.out.println("Directory does not exist or is a file.");
}

// Check if /docs directory exists in the filesystem root
File f4 = new File("/docs");
if (f4.exists() && f4.isDirectory()) {
    System.out.println("Directory exists.");
} else {
    System.out.println("Directory does not exist or is a file.");
}
```
Note that in Java, the path separator for both Windows and Unix-like systems is `/` (slash), not `\` (backslash). Therefore, we are using forward slashes (`/`) instead of backslashes (`\`). Also, you need to add `import java.io.*;` to your code if you haven't done so yet.

For more information on Java file manipulation, I recommend reading the following resources:
- [Java File and File I/O](https://www.w3schools.com/java/java_file_io.asp)
- [Introduction to Java File Handling](http://tutorials.jenkov.com/java-io/files.html)
