import java.io.File;

public class Main {
  public static void main(String[] args) {
    File currentDir = new File(".");
    checkFileOrDirectory(currentDir);

    String rootPath = "/";
    File rootDir = new File(rootPath);
    checkFileOrDirectory(rootDir);
  }

  private static void checkFileOrDirectory(File file) {
    if (file.exists()) {
      if (file.isDirectory()) {
        System.out.println(file.getName() + " is a directory");
      } else {
        System.out.println(file.getName() + " is a file");
      }
    } else {
      System.out.println(file.getName() + " does not exist");
    }
  }
}
