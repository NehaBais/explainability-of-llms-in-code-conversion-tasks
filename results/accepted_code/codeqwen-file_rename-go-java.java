import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    try {
      Files.move(Paths.get("input.txt"), Paths.get("output.txt"));
      Files.move(Paths.get("docs"), Paths.get("mydocs"));
      Files.move(Paths.get("/input.txt"), Paths.get("/output.txt"));
      Files.move(Paths.get("/docs"), Paths.get("/mydocs"));
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
