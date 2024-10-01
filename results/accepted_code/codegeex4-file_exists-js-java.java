import java.io.File;

public class FileAndDirectoryChecker {

  public static void checkFileAndDir() {
    // for the current working directory
    checkExists("input.txt");
    checkExists("docs");

    // for filesystem root
    checkExists("/input.txt");
    checkExists("/docs");
  }

  private static void checkExists(String path) {
    File fileOrDir = new File(path);
    if (fileOrDir.exists()) {
      System.out.println(path + " exists.");
    } else {
      System.out.println(path + " does not exist.");
    }
  }

  public static void main(String[] args) {
    checkFileAndDir();
  }
}
