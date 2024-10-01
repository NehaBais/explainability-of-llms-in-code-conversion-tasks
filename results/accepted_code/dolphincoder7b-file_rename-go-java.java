import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Rename a file "input.txt" to "output.txt" in the current working directory
    File input = new File("input.txt");
    if (input.exists()) {
      boolean renamed = input.renameTo(new File("output.txt"));
      System.out.println("File rename operation " + (renamed ? "succeeded." : "failed."));
    }

    // Rename a directory "docs" to "mydocs" in the current working directory
    File docsDir = new File("docs");
    if (docsDir.exists()) {
      boolean renamed = docsDir.renameTo(new File("mydocs"));
      System.out.println("Directory rename operation " + (renamed ? "succeeded." : "failed."));
    }

    // Rename a file "/input.txt" to "/output.txt" in the filesystem root
    File inputRoot = new File("/input.txt");
    if (inputRoot.exists()) {
      boolean renamed = inputRoot.renameTo(new File("/output.txt"));
      System.out.println("File rename operation " + (renamed ? "succeeded." : "failed."));
    }

    // Rename a directory "/docs" to "/mydocs" in the filesystem root
    File docsDirRoot = new File("/docs");
    if (docsDirRoot.exists()) {
      boolean renamed = docsDirRoot.renameTo(new File("/mydocs"));
      System.out.println("Directory rename operation " + (renamed ? "succeeded." : "failed."));
    }
  }
}
