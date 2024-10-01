import java.io.File;

public class RenameFiles {
  public static void main(String[] args) {
    File file = new File("input.txt");
    if (file.renameTo(new File("output.txt"))) {
      System.out.println("Input file renamed successfully.");
    } else {
      System.out.println("Failed to rename input file.");
    }

    File directory = new File("docs");
    if (directory.renameTo(new File("mydocs"))) {
      System.out.println("Directory docs renamed successfully.");
    } else {
      System.out.println("Failed to rename directory.");
    }

    file = new File("/input.txt");
    if (file.renameTo(new File("/output.txt"))) {
      System.out.println("Input file renamed successfully in root directory.");
    } else {
      System.out.println("Failed to rename input file in root directory.");
    }

    directory = new File("/docs");
    if (directory.renameTo(new File("/mydocs"))) {
      System.out.println("Directory docs renamed successfully in root directory.");
    } else {
      System.out.println("Failed to rename directory in root directory.");
    }
  }
}
