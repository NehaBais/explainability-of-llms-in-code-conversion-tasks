import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Verify for current working directory
    File file = new File("input.txt");
    File directory = new File("docs");

    if (file.exists() && directory.exists()) {
      System.out.println("Both files and directories exist.");
    } else {
      System.out.println("Either the file or the directory does not exist.");
    }

    // Verify for filesystem root
    file = new File("/input.txt");
    directory = new File("/docs");

    if (file.exists() && directory.exists()) {
      System.out.println("Both files and directories exist in the filesystem root.");
    } else {
      System.out.println("Either the file or the directory does not exist in the filesystem root.");
    }
  }
}
