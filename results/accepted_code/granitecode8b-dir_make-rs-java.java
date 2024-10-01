import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class DirectoryCreator {
  public static void main(String[] args) {
    Path path = Paths.get("./path/to/dir");
    try {
      Files.createDirectories(path);
    } catch (Exception e) {
      System.out.println("An Error Occurred!");
    }
  }
}
