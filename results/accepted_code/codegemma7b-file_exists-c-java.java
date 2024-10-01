import java.io.File;

public class FileChecker {

  public static void main(String[] args) {
    // Check for file and directory in current working directory
    File inputFile = new File("input.txt");
    File docsDirectory = new File("docs");

    System.out.println("input.txt is a regular file? " + inputFile.isFile());
    System.out.println("docs is a directory? " + docsDirectory.isDirectory());

    // Check for file and directory in filesystem root
    File rootInputFile = new File("/input.txt");
    File rootDocsDirectory = new File("/docs");

    System.out.println("/input.txt is a regular file? " + rootInputFile.isFile());
    System.out.println("/docs is a directory? " + rootDocsDirectory.isDirectory());
  }
}
