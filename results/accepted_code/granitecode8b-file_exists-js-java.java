import java.io.File;

public class FileAndDirectoryChecker {
  public static void main(String[] args) {
    // Check for file and directory in current working directory
    checkForFileAndDirectory(".");

    // Check for file and directory in filesystem root
    checkForFileAndDirectory("/");
  }

  private static void checkForFileAndDirectory(String path) {
    File file = new File(path + "/input.txt");
    if (file.exists() && !file.isDirectory()) {
      System.out.println("File input.txt exists in " + path);
    } else {
      System.out.println("File input.txt does not exist in " + path);
    }

    File folder = new File(path + "/docs");
    if (folder.exists() && folder.isDirectory()) {
      System.out.println("Directory docs exists in " + path);
    } else {
      System.out.println("Directory docs does not exist in " + path);
    }
  }
}
