import java.io.File;

public class Main {
  public static void main(String[] args) {
    checkFileOrDirectory("input.txt");
    checkFileOrDirectory("/input.txt");
    checkFileOrDirectory("docs");
    checkFileOrDirectory("/docs");
  }

  private static void checkFileOrDirectory(String path) {
    File file = new File(path);
    if (file.exists()) {
      if (file.isDirectory()) {
        System.out.println(path + " is a directory");
      } else {
        System.out.println(path + " is a file");
      }
    } else {
      System.out.println(path + " does not exist");
    }
  }
}
