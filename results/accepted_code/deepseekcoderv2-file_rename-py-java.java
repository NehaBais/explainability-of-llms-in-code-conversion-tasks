import java.io.File;

public class FileRename {
  public static void main(String[] args) {
    String inputFilePath = "input.txt";
    String outputFilePath = "output.txt";
    String docsPath = "docs";
    String myDocsPath = "mydocs";

    // Here, the user has the rights to do so
    File file = new File(inputFilePath);
    if (file.exists()) {
      file.renameTo(new File(outputFilePath));
    } else {
      System.out.println("File not found.");
    }

    // root directory or the current working directory, depending on your operating system
    File docsFolder = new File(docsPath);
    if (docsFolder.exists()) {
      docsFolder.renameTo(new File(myDocsPath));
    } else {
      System.out.println("Directory not found.");
    }
  }
}
