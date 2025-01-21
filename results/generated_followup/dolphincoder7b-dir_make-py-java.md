The error occurs because we're trying to use the `File` class outside of its package, which is not the case in Java. This is typically handled by importing the necessary classes using the `import` keyword at the beginning of the file. In our case, it should be `import java.io.File;`

Now, we can use the `File` class as intended without encountering any errors. The corrected Java method is now as follows:
```java
import java.io.File;
public class FileUtil  {
  public static void mkdirp(String path) {
    File file = new File(path);
    if (!file.exists()) {
      if (file.mkdirs()) {
        System.out.println("Directory is created!");
       } else  {
        System.out.println("Failed to create directory!");
       }
     }
   }
}
```
