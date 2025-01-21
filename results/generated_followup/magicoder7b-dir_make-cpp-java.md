 The error is due to the IOException class not being recognized because Java's try-catch blocks are designed to handle checked exceptions, which are classes that extend java.lang.Exception or its subclasses. Since IOException does not fall into this category, the compiler throws an error.

Fix:
We have to import the IOException class from java.io package before using it inside our catch block.

Corrected Code:

```java
import java.nio.file.*;
import java.io.IOException;  //<-- Importing IOException

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);

    try {
      Files.createDirectories(pathToCreate);
    } catch (FileAlreadyExistsException e) {
      // Directory already exists, do nothing
    } catch (IOException e) {
      System.out.println("couldn't create directory: " + pathToCreate.toString());
    }
  }
}
```
