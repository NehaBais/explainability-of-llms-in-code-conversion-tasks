import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Rename in current working directory
    File inputCurrent = new File("input.txt");
    if (inputCurrent.exists()) {
      File outputCurrent = new File("output.txt");
      inputCurrent.renameTo(outputCurrent);
    }

    File docsCurrent = new File("docs");
    if (docsCurrent.exists()) {
      File mydocsCurrent = new File("mydocs");
      docsCurrent.renameTo(mydocsCurrent);
    }

    // Rename in filesystem root
    File inputRoot = new File("/input.txt");
    if (inputRoot.exists()) {
      File outputRoot = new File("/output.txt");
      inputRoot.renameTo(outputRoot);
    }

    File docsRoot = new File("/docs");
    if (docsRoot.exists()) {
      File mydocsRoot = new File("/mydocs");
      docsRoot.renameTo(mydocsRoot);
    }
  }
}
