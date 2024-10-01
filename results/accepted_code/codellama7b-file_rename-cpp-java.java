import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws Exception {
    // Rename file "input.txt" to "output.txt" here
    Files.move(Paths.get("input.txt"), Paths.get("output.txt"));

    // Rename directory "docs" to "mydocs" here
    Files.move(Paths.get("docs"), Paths.get("mydocs"));

    // Rename file "/input.txt" to "/output.txt" in the filesystem root
    Files.move(Paths.get("/input.txt"), Paths.get("/output.txt"));

    // Rename directory "/docs" to "/mydocs" in the filesystem root
    Files.move(Paths.get("/docs"), Paths.get("/mydocs"));
  }
}
