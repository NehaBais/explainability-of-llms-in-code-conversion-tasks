import java.io.File;

public class Main {

  static void fileExists(String path) {
    File f = new File(path);
    System.out.print(path);
    if (f.exists()) {
      if (f.isDirectory()) {
        System.out.println(" Is a directory");
      } else {
        System.out.println(" exists with a file size of " + f.length() + " bytes.");
      }
    } else {
      System.out.println(" does not exist");
    }
  }

  public static void main(String[] args) {
    fileExists("input.txt");
    fileExists("/zero_length.txt");
    fileExists("/docs/input.txt");
    fileExists("/docs/zero_length.txt");
  }
}
