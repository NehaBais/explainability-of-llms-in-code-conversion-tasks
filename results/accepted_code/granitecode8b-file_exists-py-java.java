import java.io.File;

public class FileChecker {
  public static void main(String[] args) {
    // Verifying file and directory existance in the current working directory
    String cwd = System.getProperty("user.dir");

    File inputFile = new File(cwd + "/input.txt");
    if (inputFile.exists() && !inputFile.isDirectory()) {
      System.out.println("Input file exists in the current working directory.");
    } else {
      System.out.println("Input file does not exist in the current working directory.");
    }

    File docsDir = new File(cwd + "/docs");
    if (docsDir.exists() && docsDir.isDirectory()) {
      System.out.println("Docs directory exists in the current working directory.");
    } else {
      System.out.println("Docs directory does not exist in the current working directory.");
    }

    // Verifying file and directory existance in the filesystem root
    File inputFileRoot = new File("/input.txt");
    if (inputFileRoot.exists() && !inputFileRoot.isDirectory()) {
      System.out.println("Input file exists in the filesystem root.");
    } else {
      System.out.println("Input file does not exist in the filesystem root.");
    }

    File docsDirRoot = new File("/docs");
    if (docsDirRoot.exists() && docsDirRoot.isDirectory()) {
      System.out.println("Docs directory exists in the filesystem root.");
    } else {
      System.out.println("Docs directory does not exist in the filesystem root.");
    }
  }
}
