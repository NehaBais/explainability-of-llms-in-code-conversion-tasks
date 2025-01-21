import java.io.File;
import java.io.IOException;
import java.nio.file.Files;

public class Main {
  public static void main(String[] args) throws IOException {
    String err = "File move error";
    Files.move(new File("input.txt"), new File("output.txt"), StandardCopyOption.REPLACE_EXISTING);
    Files.move(new File("docs"), new File("mydocs"), StandardCopyOption.REPLACE_EXISTING);
    Files.move(
        new File("/input.txt"), new File("/output.txt"), StandardCopyOption.REPLACE_EXISTING);
    Files.move(new File("/docs"), new File("/mydocs"), StandardCopyOption.REPLACE_EXISTING);
  }
}
