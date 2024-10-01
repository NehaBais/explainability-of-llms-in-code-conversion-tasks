import java.io.*;

public class Main {

  public static void main(String[] args) throws IOException {
    File inputFile = new File("input.txt");
    File outputFile = new File("output.txt");
    if (!inputFile.exists()) {
      throw new FileNotFoundException();
    }
    if (!inputFile.renameTo(outputFile)) {
      System.err.println("Failed to rename 'input.txt' to 'output.txt'");
    }

    File docsDir = new File("docs");
    File myDocsDir = new File("mydocs");
    if (!docsDir.exists() && !docsDir.mkdir()) {
      throw new IOException();
    }
    if (!myDocsDir.renameTo(new File("/mydocs"))) {
      System.err.println("Failed to rename 'docs' directory to '/mydocs' directory");
    }
  }
}
