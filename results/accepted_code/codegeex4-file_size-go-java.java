import java.io.File;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

  public static void printFileSize(String filePath) {
    File file = new File(filePath);
    if (!file.exists()) {
      System.out.println("File does not exist: " + filePath);
      return;
    }
    long fileSize = file.length();
    System.out.println(fileSize);
  }

  public static void main(String[] args) {
    printFileSize("input.txt");
    Path path = Paths.get("/");
    File root = new File(path.toAbsolutePath().toString(), "input.txt");
    if (!root.exists()) {
      System.out.println("File does not exist: /input.txt in the root directory.");
      return;
    }
    long fileSize = root.length();
    System.out.println(fileSize);
  }
}
