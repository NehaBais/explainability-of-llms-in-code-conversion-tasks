import java.io.File;

public class FileChecker {
  public static void main(String[] args) {
    // Check if input.txt exists in the current working directory
    File file1 = new File("input.txt");
    System.out.println("Input.txt exists? " + file1.exists());

    // Check if input.txt exists in the root directory
    File file2 = new File("/");
    File inputFile = new File(file2, "input.txt");
    System.out.println("Input.txt exists in root directory? " + inputFile.exists());

    // Check if docs directory exists in the current working directory
    File dir1 = new File("docs");
    System.out.println("Docs directory exists? " + dir1.exists());

    // Check if docs directory exists in the root directory
    File dir2 = new File("/");
    File docsDir = new File(dir2, "docs");
    System.out.println("Docs directory exists in root directory? " + docsDir.exists());
  }
}
