import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    moveFileOrDirectory("input.txt", "output.txt");
    moveFileOrDirectory("docs", "mydocs");
    moveFileOrDirectory("/input.txt", "/output.txt");
    moveFileOrDirectory("/docs", "/mydocs");
  }

  public static void moveFileOrDirectory(String source, String destination) {
    try {
      Files.move(Paths.get(source), Paths.get(destination), StandardCopyOption.REPLACE_EXISTING);
    } catch (IOException e) {
      System.err.println("Error moving: " + source);
    }
  }
}
