import java.io.File;

public class FileChecker {

  public static void main(String[] args) {

    // Check for file and directory in current working directory
    File inputFile = new File("input.txt");
    File docsDirectory = new File("docs");

    if (inputFile.exists() && docsDirectory.exists()) {
      System.out.println("File and directory found in current working directory.");
    } else {
      System.out.println("File and directory not found in current working directory.");
    }

    // Check for file and directory in filesystem root
    File rootInputFile = new File("/input.txt");
    File rootDocsDirectory = new File("/docs");

    if (rootInputFile.exists() && rootDocsDirectory.exists()) {
      System.out.println("File and directory found in filesystem root.");
    } else {
      System.out.println("File and directory not found in filesystem root.");
    }
  }
}
