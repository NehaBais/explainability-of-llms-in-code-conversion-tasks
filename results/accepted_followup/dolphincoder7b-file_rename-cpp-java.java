import java.nio.file.Files;

public class Main {
  public static void main(String[] args) throws Exception {
    // Rename  "input.txt" into  "output.txt" and  "docs" into  "mydocs", both in the current
    // working
    // directory
    Files.move(Paths.get("input.txt"), Paths.get("output.txt"));
    Files.move(Paths.get("docs"), Paths.get("mydocs"));

    // Rename  "/input.txt" into  "/output.txt" and  "/docs" into  "/mydocs"
    Files.move(Paths.get("/input.txt"), Paths.get("/output.txt"));
    Files.move(Paths.get("/docs"), Paths.get("/mydocs"));
  }
}
