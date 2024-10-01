import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    String err = "File move error";
    try {
      Path source1 = Paths.get("input.txt");
      Path target1 = Paths.get("output.txt");
      Files.move(source1, target1);

      Path source2 = Paths.get("docs");
      Path target2 = Paths.get("mydocs");
      Files.move(source2, target2);

      Path rootSource1 = Paths.get("/", "input.txt");
      Path rootTarget1 = Paths.get("/", "output.txt");
      Files.move(rootSource1, rootTarget1);

      Path rootSource2 = Paths.get("/", "docs");
      Path rootTarget2 = Paths.get("/", "mydocs");
      Files.move(rootSource2, rootTarget2);
    } catch (IOException e) {
      System.out.println(err);
      e.printStackTrace();
    }
  }
}
