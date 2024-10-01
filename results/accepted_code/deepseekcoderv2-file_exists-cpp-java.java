import java.io.File;
import java.nio.file.Files;

public class FileExists {
  public static void main(String[] args) throws Exception {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
  }

  public static void file_exists(String path) {
    File f = new File(path);
    System.out.print(f.getAbsolutePath());
    if (f.exists()) {
      if (f.isDirectory()) {
        System.out.println(" is a directory");
      } else {
        System.out.println(" exists with a file size of " + Files.size(f.toPath()));
      }
    } else {
      System.out.println(" does not exist");
    }
  }
}
