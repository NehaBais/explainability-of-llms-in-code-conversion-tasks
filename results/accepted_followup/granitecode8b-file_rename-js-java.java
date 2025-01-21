import java.io.File;

public class FileRenamed {
  public static void main(String[] args) {
    // Rename file in current working directory
    File input = new File("input.txt");
    File output = new File("output.txt");
    input.renameTo(output);

    // Rename file in root directory
    File inputRoot = new File("c:input.txt");
    File outputRoot = new File("c:output.txt");
    inputRoot.renameTo(outputRoot);

    // Rename folder in current working directory
    File docs = new File("docs");
    File mydocs = new File("mydocs");
    docs.renameTo(mydocs);

    // Rename folder in root directory
    File docsRoot = new File("c:docs");
    File mydocsRoot = new File("c:mydocs");
    docsRoot.renameTo(mydocsRoot);
  }
}
