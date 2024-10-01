import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import org.apache.commons.io.FileUtils;

public class Main {
  public static void main(String[] args) throws Exception {
    Path filePath = Paths.get("input.txt");
    if (Files.exists(filePath)) {
      System.out.println(FileUtils.sizeOf(new File("input.txt")));
    } else {
      throw new Exception("File not found: input.txt");
    }
    System.out.println(FileUtils.sizeOf(new File("/input.txt")));
  }
}
