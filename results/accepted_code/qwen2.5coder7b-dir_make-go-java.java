import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    try {
      Path path = Paths.get("/tmp/some/path/to/dir");
      Files.createDirectories(path);
    } catch (Exception e) {
      System.out.println("Error: " + e.getMessage());
    }
  }
}
