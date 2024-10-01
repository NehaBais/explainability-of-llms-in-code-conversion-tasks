import java.io.File;

public class FileChecker {
  public static void main(String[] args) {
    // Check for regular file in current working directory
    File inputTxt = new File("input.txt");
    boolean isRegularFile = inputTxt.exists() && !inputTxt.isDirectory();
    System.out.println("input.txt is a regular file? " + (isRegularFile ? "yes" : "no"));

    // Check for directory in current working directory
    File docsDir = new File("docs");
    boolean isDirectory = docsDir.exists() && docsDir.isDirectory();
    System.out.println("docs is a directory? " + (isDirectory ? "yes" : "no"));

    // Check for regular file in filesystem root
    File rootInputTxt = new File("/input.txt");
    isRegularFile = rootInputTxt.exists() && !rootInputTxt.isDirectory();
    System.out.println("/input.txt is a regular file? " + (isRegularFile ? "yes" : "no"));

    // Check for directory in filesystem root
    File rootDocsDir = new File("/docs");
    isDirectory = rootDocsDir.exists() && rootDocsDir.isDirectory();
    System.out.println("/docs is a directory? " + (isDirectory ? "yes" : "no"));
  }
}
