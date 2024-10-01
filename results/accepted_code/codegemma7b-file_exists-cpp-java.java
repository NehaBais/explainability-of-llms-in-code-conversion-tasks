import java.io.File;

public class FileExists {

  public static void fileExists(String path) {
    File file = new File(path);
    System.out.println(path);
    if (file.exists()) {
      if (file.isDirectory()) {
        System.out.println(" is a directory");
      } else {
        System.out.println(" exists with a file size of " + file.length() + " bytes.");
      }
    } else {
      System.out.println(" does not exist");
    }
  }

  public static void main(String[] args) {
    fileExists("input.txt");
    fileExists("zero_length.txt");
    fileExists("docs/input.txt");
    fileExists("docs/zero_length.txt");
  }
}
