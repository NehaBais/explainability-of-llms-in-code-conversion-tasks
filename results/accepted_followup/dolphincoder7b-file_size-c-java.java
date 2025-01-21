import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import org.apache.commons.io.FileUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class Main {
  private static final Logger logger = LoggerFactory.getLogger(Main.class);

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
