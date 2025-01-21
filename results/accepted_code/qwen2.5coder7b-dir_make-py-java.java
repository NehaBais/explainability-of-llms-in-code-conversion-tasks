import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    mkdirp("./path/to/dir");
  }

  public static void mkdirp(String path) {
    Path dir = Paths.get(path);
    try {
      Files.createDirectories(dir);
    } catch (Exception e) {
      System.out.println("Error creating directory: " + e.getMessage());
    }
  }
}
