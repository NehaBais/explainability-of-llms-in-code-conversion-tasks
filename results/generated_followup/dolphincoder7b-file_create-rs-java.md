The error message is "cannot find symbol" for both methods "and()" and "thenCompose()". These two methods are not available within the standard library of Java. To fix this, we need to include additional libraries or classes that provide these functionalities.
In addition, we replaced `and()` with `.thenCompose()` which is a method from the `CompletableFuture` class in Java 8.

Here is the entire corrected code:
```java
import java.io.*;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME  = "docs";

  public static void main(String[] args) throws IOException, InterruptedException  {
    create("here").thenCompose(path  -> create("/")).join();
   }

  static CompletableFuture<File> create(String root)  {
    Path fPath  = Paths.get(root, FILE_NAME);
    Path dPath  = Paths.get(root, DIR_NAME);

    try (DirectoryStream<Path> stream  = Files.newDirectoryStream(dPath)) {
      for (Path entry : stream) {
        if (entry.toFile().isDirectory()) {
          deleteDir(entry.toFile());
         } else  {
          Files.deleteIfExists(entry);
         }
       }
     } catch  (IOException | DirectoryIteratorException e)  {
     }

    return Files.createDirectories(dPath).thenCompose(path  -> Files.createFile(fPath));
   }

  private static void deleteDir(File fileOrDirectory)  {
    if  (fileOrDirectory.isDirectory())  {
      for  (File child  : Objects.requireNonNull(fileOrDirectory.listFiles()))  {
        deleteDir(child);
       }
     }

    try  {
      Files.deleteIfExists(fileOrDirectory.toPath());
     } catch  (IOException e)  {
     }
   }
}
```
