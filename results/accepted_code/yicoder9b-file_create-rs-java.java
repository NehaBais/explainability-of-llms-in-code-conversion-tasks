import java.io.IOException;
import java.nio.file.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    try {
      create(Paths.get("."));
      create(Paths.get("/"));
    } catch (IOException e) {
      errorHandler(e, 1);
    }
  }

  private static void create(Path root) throws IOException {
    Path filePath = Paths.get(root.toString(), FILE_NAME);
    Path dirPath = Paths.get(root.toString(), DIR_NAME);
    Files.createFile(filePath);
    Files.createDirectory(dirPath);
  }

  private static void errorHandler(Exception e, int code) {
    System.err.println("Error: " + e.getMessage());
    System.exit(code);
  }
}
