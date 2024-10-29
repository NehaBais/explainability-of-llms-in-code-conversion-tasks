import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String dir = "./path/to/dir";
    createDirWithParents(dir);
  }

  private static void createDirWithParents(String dir) {
    try {
      Files.createDirectories(Paths.get(dir));
    } catch (IOException e) {
      System.out.println("An error occurred while creating directories");
    }
  }
}
