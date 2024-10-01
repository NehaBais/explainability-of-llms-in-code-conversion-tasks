import java.io.File;

public class Main {
  public static void main(String[] args) throws Exception {
    renameFilesInDirectory(new File("."));
    renameFilesInDirectory(new File("/"));
  }

  private static void renameFilesInDirectory(File directory) throws Exception {
    // Rename input.txt to output.txt
    File inputFile = new File(directory, "input.txt");
    File outputFile = new File(directory, "output.txt");

    if (inputFile.exists()) {
      boolean success = inputFile.renameTo(outputFile);
      if (!success) throw new Exception("Failed to rename file: " + inputFile.getPath());
    }

    // Rename docs directory to mydocs
    File docsDirectory = new File(directory, "docs");
    File myDocsDirectory = new File(directory, "mydocs");

    if (docsDirectory.exists()) {
      boolean success = docsDirectory.renameTo(myDocsDirectory);
      if (!success) throw new Exception("Failed to rename directory: " + docsDirectory.getPath());
    }
  }
}
