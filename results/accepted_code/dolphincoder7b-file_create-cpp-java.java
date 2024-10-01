import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws Exception {
    Path filePath = Paths.get("output.txt");
    Files.createFile(filePath); // Creates an empty file of size 0 bytes

    // Create directory
    Path dirPath = Paths.get("docs");
    if (!Files.exists(dirPath)) Files.createDirectory(dirPath);
  }
}
