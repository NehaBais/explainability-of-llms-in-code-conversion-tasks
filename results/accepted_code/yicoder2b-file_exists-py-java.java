import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    verifyExistence("input.txt");
    verifyExistence("/input.txt");
    verifyExistence("docs");
    verifyExistence("/docs");
  }

  private static void verifyExistence(String path) {
    Path filePath = Paths.get(path);
    try {
      if (Files.exists(filePath)) {
        System.out.println(path + " exists.");
      } else if (filePath.isAbsolute() && new File(path).getParentFile().exists()) {
        System.out.println(path + " does not exist but its parent directory does.");
      } else {
        System.out.println(path + " does not exist and it's a relative path.");
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
