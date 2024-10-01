import java.io.File;

public class FileMove {
  public static void main(String[] args) {
    // Here, we are assuming that "input.txt" and "docs" files/directories exist in the current
    // working directory ("./").
    // If they don't exist, you may need to use absolute paths or check for existence before
    // renaming.

    try {
      File input = new File("input.txt");
      File output = new File("output.txt");
      if (input.renameTo(output)) {
        System.out.println("Renamed file from 'input.txt' to 'output.txt'");
      } else {
        System.err.println("Failed to rename the file.");
      }

      File docs = new File("docs");
      File mydocs = new File("mydocs");
      if (docs.renameTo(mydocs)) {
        System.out.println("Renamed directory from 'docs' to 'mydocs'");
      } else {
        System.err.println("Failed to rename the directory.");
      }

      // Renaming files/directories in filesystem root:
      File inputRoot = new File("/input.txt");
      File outputRoot = new File("/output.txt");
      if (inputRoot.renameTo(outputRoot)) {
        System.out.println("Renamed file from '/input.txt' to '/output.txt'");
      } else {
        System.err.println("Failed to rename the file.");
      }

      File docsRoot = new File("/docs");
      File mydocsRoot = new File("/mydocs");
      if (docsRoot.renameTo(mydocsRoot)) {
        System.out.println("Renamed directory from '/docs' to '/mydocs'");
      } else {
        System.err.println("Failed to rename the directory.");
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
