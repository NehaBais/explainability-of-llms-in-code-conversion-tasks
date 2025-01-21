import java.io.File;

public class FileChecker {
  public static void main(String[] args) {
    // Check for the current working directory
    checkFileAndDirectory("input.txt", true, "");
    checkFileAndDirectory("docs", false, ".");

    // Check for the filesystem root
    checkFileAndDirectory("input.txt", true, "/");
    checkFileAndDirectory("docs", false, "/");
  }

  private static void checkFileAndDirectory(String name, boolean isFile, String path) {
    File file = new File(path + "/" + name);
    if (isFile) {
      System.out.println("Checking if " + name + " exists as a file: " + file.exists());
    } else {
      System.out.println("Checking if " + name + " exists as a directory: " + file.isDirectory());
    }
  }
}
