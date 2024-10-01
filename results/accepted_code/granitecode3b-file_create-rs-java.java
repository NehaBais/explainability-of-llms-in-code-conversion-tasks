import java.io.IOException;
import java.nio.file.*;

public class FileCreator {
  public static void main(String[] args) {
    try {
      createCurrentDirectory();
      createRootDirectory();
    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  private static void createCurrentDirectory() throws IOException {
    Path path = Paths.get("output.txt");
    Files.createFile(path);
  }

  private static void createRootDirectory() throws IOException {
    Path path = Paths.get("/docs");
    Files.createDirectories(path);
  }
}
