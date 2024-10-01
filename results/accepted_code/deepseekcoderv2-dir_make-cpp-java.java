import java.nio.file.*;

public class Mkdir {
  public static void main(String[] args) throws IOException {
    Path newDir = Paths.get("path/to/new-directory");

    if (!Files.exists(newDir)) {
      Files.createDirectories(newDir);
    } else {
      System.out.println("Directory already exists.");
    }
  }
}
