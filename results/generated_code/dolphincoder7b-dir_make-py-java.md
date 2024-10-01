To convert the Python code to Java, we can use a method similar to `os.makedirs()` in Java but with an additional check. Here is the equivalent Java method:
```java
public class FileUtil {
    public static void mkdirp(String path){
        File file = new File(path); 
        if (!file.exists()) { 
            if (file.mkdirs()) { 
                System.out.println("Directory is created!"); 
            } else { 
                System.out.println("Failed to create directory!"); 
            } 
        } 
    } 
}
```
This Java method first creates a `File` object for the given path, then checks if it exists or not using the `exists()` function. If it doesn't exist, it tries to create all parent directories. If that's successful, it prints "Directory is created!" on success; otherwise, it prints "Failed to create directory!".
We also need to add the `File` class in our code because we're creating an instance of it using `new File(path)`. The Java method uses `mkdirs()` instead of `mkdir()`, which creates a new directory with a name that’s equal to the last path component. We use `mkdirs()` to create a parent hierarchy if needed.
Note: Make sure you have the necessary permissions for creating directories and files in your system or environment. Also, make sure your project is set up correctly so that Java can compile and run the code successfully.
