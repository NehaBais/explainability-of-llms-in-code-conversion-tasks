import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    try {
      // Rename in current directory
      Path src1 = Paths.get("input.txt");
      Path dst1 = Paths.get("output.txt");
      Files.move(src1, dst1);

      Path src2 = Paths.get("docs");
      Path dst2 = Paths.get("mydocs");
      Files.move(src2, dst2);

      // Rename in root directory
      Path src3 = Paths.get("/", "input.txt");
      Path dst3 = Paths.get("/", "output.txt");
      Files.move(src3, dst3);

      Path src4 = Paths.get("/", "docs");
      Path dst4 = Paths.get("/", "mydocs");
      Files.move(src4, dst4);
    } catch (Exception e) {
      System.out.println("An error occurred: " + e.getMessage());
    }
  }
}
