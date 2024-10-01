import java.io.File;

public class Main {
  public static void main(String[] args) {
    File input = new File("input.txt");
    File output = new File("output.txt");
    input.renameTo(output);

    File docsDir = new File("docs");
    File myDocsDir = new File("mydocs");
    docsDir.renameTo(myDocsDir);

    // This line can be uncommented to rename the files in the root directory
    // String rootPath = "/";
    // input = new File(rootPath + "input.txt");
    // output = new File(rootPath + "output.txt");
    // docsDir = new File(rootPath + "docs");
    // myDocsDir = new File(rootPath + "mydocs");
    // input.renameTo(output);
    // docsDir.renameTo(myDocsDir);
  }
}
