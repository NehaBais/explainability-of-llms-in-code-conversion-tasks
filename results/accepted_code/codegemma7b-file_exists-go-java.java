import java.io.File;

public class FileExistenceChecker {

  public static void main(String[] args) {
    // Check files and directories in the current working directory
    File inputFile = new File("input.txt");
    File docsDirectory = new File("docs");

    if (inputFile.exists()) {
      System.out.println("input.txt exists");
    } else {
      System.out.println("input.txt does not exist");
    }

    if (docsDirectory.exists()) {
      System.out.println("docs directory exists");
    } else {
      System.out.println("docs directory does not exist");
    }

    // Check files and directories in the root directory
    File rootInputFile = new File("/input.txt");
    File rootDocsDirectory = new File("/docs");

    if (rootInputFile.exists()) {
      System.out.println("/input.txt exists");
    } else {
      System.out.println("/input.txt does not exist");
    }

    if (rootDocsDirectory.exists()) {
      System.out.println("/docs directory exists");
    } else {
      System.out.println("/docs directory does not exist");
    }
  }
}
