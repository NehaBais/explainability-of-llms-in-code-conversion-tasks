import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    try {
      Path dir = Paths.get("./path/to/dir");
      if (!Files.exists(dir)) {
        Files.createDirectories(dir);
      }
    } catch (Exception e) {
      System.out.println("An Error Occured! " + e.getMessage());
    }
  }
}
