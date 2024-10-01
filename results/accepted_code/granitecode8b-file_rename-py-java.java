import java.io.File;

public class RenameFiles {
  public static void main(String[] args) {
    // Rename file in current working directory
    File inputFile = new File("input.txt");
    File outputFile = new File("output.txt");
    inputFile.renameTo(outputFile);

    File docsDir = new File("docs");
    File myDocsDir = new File("mydocs");
    docsDir.renameTo(myDocsDir);

    // Rename file in root directory
    String separator = System.getProperty("file.separator");
    inputFile = new File(separator + "input.txt");
    outputFile = new File(separator + "output.txt");
    inputFile.renameTo(outputFile);

    docsDir = new File(separator + "docs");
    myDocsDir = new File(separator + "mydocs");
    docsDir.renameTo(myDocsDir);
  }
}
