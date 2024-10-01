import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    // Rename input.txt to output.txt in current working directory
    Files.move(Paths.get("input.txt"), Paths.get("output.txt"));
    // Rename docs to mydocs in current working directory
    Files.move(Paths.get("docs"), Paths.get("mydocs"));

    // Rename input.txt to output.txt in root filesystem
    Files.move(Paths.get("/input.txt"), Paths.get("/output.txt"));
    // Rename docs to mydocs in root filesystem
    Files.move(Paths.get("/docs"), Paths.get("/mydocs"));
  }
}
