import java.io.File;

public class FileRenamer {
  public static void main(String[] args) {
    String input = "input.txt";
    String output = "output.txt";
    String directory = "docs";
    String newDirectory = "mydocs";

    File fileToRename = new File(input);
    boolean renamed = fileToRename.renameTo(new File(output));
    if (renamed) {
      System.out.println("File renamed successfully");
    } else {
      System.out.println("Failed to rename file");
    }

    File directoryToRename = new File(directory);
    String newPath = "/" + newDirectory; // Use forward slash as separator for Unix-based systems
    boolean renamedDir = directoryToRename.renameTo(new File(newPath));
    if (renamedDir) {
      System.out.println("Directory renamed successfully");
    } else {
      System.out.println("Failed to rename directory");
    }
  }
}
