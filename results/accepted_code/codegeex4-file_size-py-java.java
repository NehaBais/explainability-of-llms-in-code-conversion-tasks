import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    try {
      // For file in the current working directory
      Path path1 = Paths.get("input.txt");
      long size1 = Files.size(path1);
      System.out.println("Size of input.txt in current directory: " + size1);

      // For file in the file system root
      Path path2 = Paths.get("/input.txt");
      long size2 = Files.size(path2);
      System.out.println("Size of input.txt in file system root: " + size2);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
