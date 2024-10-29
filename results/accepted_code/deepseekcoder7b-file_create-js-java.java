import java.io.IOException;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Path path1 = Paths.get(".", "output.txt"); 
        Files.write(path1, "".getBytes(), StandardOpenOption.CREATE);
  
        // Assuming the file system root to be '/' for simplicity
        // In reality you cannot write files at root level in java as it is not possible on Unix/Linux systems
        Path path2 = Paths.get("/", "output.txt"); 
        Files.write(path2, "".getBytes(), StandardOpenOption.CREATE);
  
        Path dir1 = Paths.get(".", "docs");
        Files.createDirectories(dir1);

        Path dir2 = Paths<｜begin▁of▁sentence｜>.get("/", "docs");
        Files.createDirectories(dir2);
    }
}