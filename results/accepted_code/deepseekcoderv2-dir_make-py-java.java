import java.nio.file.Files;
import java.nio.file.Paths;

public class Mkdirp {
  public static void mkdirp(String path) {
    try {
      Files.createDirectories(Paths.get(path));
    } catch (Exception e) {
      // Handle exceptions if necessary
      System.err.println("Error creating directory: " + e.getMessage());
    }
  }

  public static void main(String[] args) {
    mkdirp("./path/to/dir");
  }
}
