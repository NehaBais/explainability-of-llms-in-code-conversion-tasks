The provided code is written in Rust and it is used to get the size of a file named input.txt from the current working directory and another one, which is equivalent to the root of the file system. 

To convert this code into Java, we have to use the java.io.File class instead of the standard library classes for filesystem operations. We will also need a `PrintStream` to print error messages to the console. Note that the `System.out` object is used in place of `stdout`. Here's how it would look:

```java
import java.io.File;
import java.io.IOException;
import java.util.Scanner;
import static java.lang.System.out;

public class Main {
    public static void main(String[] args) {
        if (args.length < 1) {
            errorAndExit("No file name supplied", 2);
        }
        String fileName = args[0];
        File file = new File(fileName);

        long size;
        try {
            size = file.length();
        } catch (Exception e) {
            errorAndExit(e, 2);
            return;
        }

        out.println("Size of " + fileName + " is " + size + " bytes");
    }

    private static void errorAndExit(Object msg, int code) {
        if (msg instanceof String) {
            out.println((String) msg);
        } else if (msg instanceof Exception) {
            out.println(((Exception) msg).getMessage());
        } else {
            out.println("Unknown error: " + msg);
        }
        System.exit(code);
    }
}
```
Please note that the equivalent of `env::args()` is `String[] args` in Java, and `-> or ||` was changed to a single ternary operator to improve readability. 

Also, be aware that if you are trying to get size of file from root directory, this may result in a security issue because it can potentially allow directory traversal attacks if you're not careful with the supplied filenames or you don't have necessary permissions to access the filesystem.
