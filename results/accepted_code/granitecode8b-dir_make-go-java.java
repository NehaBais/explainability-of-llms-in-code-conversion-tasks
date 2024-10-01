import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class MkdirAll {
  public static void main(String[] args) throws IOException {
    String path = "./path/to/dir";
    Path dirPath = Paths.get(path);
    Files.createDirectories(dirPath);
  }
}
