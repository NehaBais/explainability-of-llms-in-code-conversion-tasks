 The JavaScript code uses ActiveXObject, which is a feature only available in Internet Explorer and not supported by other web browsers or in the standard JavaScript language specification. Java, on the other hand, doesn't have an equivalent feature for this kind of functionality. 

However, if we assume that you are referring to reading file sizes from within a Java application, then you can use java.nio.file.Files and java.nio.file.Paths classes in combination with java.nio.file.attribute.BasicFileAttributes.

Here is the equivalent code:

```java
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;

public class Main {
    public static void main(String[] args) throws Exception{
        System.out.println("Size of input.txt in current directory : " + Files.readAttribute(Paths.get("input.txt"), BasicFileAttributes::size));
        System.out.println("Size of c:/input.txt : " + Files.readAttribute(Paths.get("c:\\input.txt"), BasicFileAttributes::size));
    }
}
```
This code reads the size of files named input.txt in the current directory and in the root directory (c:\input.txt). If you have a different file name or location, adjust the string passed to Paths.get() accordingly. 

Please note: Java does not have direct support for ActiveXObject like JavaScript has. So, some features that JavaScript supports, Java might not directly support.
