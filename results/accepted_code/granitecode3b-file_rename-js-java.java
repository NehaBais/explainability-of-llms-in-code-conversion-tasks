import java.io.File;

public class FileRenamer {
  public static void main(String[] args) {
    // Rename input.txt to output.txt in the current working directory
    File input = new File("input.txt");
    File output = new File("output.txt");

    if (!input.renameTo(output)) {
      System.out.println("Failed to rename file.");
    }

    // Rename input.txt to output.txt in the filesystem root
    input = new File("/input.txt");
    output = new File("/output.txt");

    if (!input.renameTo(output)) {
      System.out.println("Failed to rename file.");
    }

    // Rename docs to mydocs in the current working directory
    input = new File("docs");
    output = new File("mydocs");

    if (!input.renameTo(output)) {
      System.out.println("Failed to rename folder.");
    }

    // Rename docs to mydocs in the filesystem root
    input = new File("/docs");
    output = new File("/mydocs");

    if (!input.renameTo(output)) {
      System.out.println("Failed to rename folder.");
    }
  }
}
