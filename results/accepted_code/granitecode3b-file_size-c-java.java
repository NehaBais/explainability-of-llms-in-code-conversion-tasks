import java.io.File;
import java.nio.file.Files;

public class FileSize {
  public static void main(String[] args) throws Exception {
    File input = new File("input.txt");
    long size1 = input.length();
    System.out.println(size1);
    File rootInput = new File("/");
    long size2 = Files.size(rootInput.toPath().resolve("input.txt"));
    System.out.println(size2);
  }
}
