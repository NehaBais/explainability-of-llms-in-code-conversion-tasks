import java.io.File;

public class RenameFilesAndDirectories {

  public static void main(String[] args) {
    renameInCurrentDirectory();
    renameInRootDirectory();
  }

  private static void renameInCurrentDirectory() {
    File inputFile = new File("input.txt");
    File outputFile = new File("output.txt");

    if (inputFile.exists()) {
      inputFile.renameTo(outputFile);
    } else {
      System.out.println("Input file does not exist in the current directory.");
    }

    File docsFolder = new File("docs");
    File myDocsFolder = new File("mydocs");

    if (docsFolder.exists()) {
      docsFolder.renameTo(myDocsFolder);
    } else {
      System.out.println("Docs folder does not exist in the current directory.");
    }
  }

  private static void renameInRootDirectory() {
    String rootPath = "/";

    File rootInputFile = new File(rootPath + "input.txt");
    File rootOutputFile = new File(rootPath + "output.txt");

    if (rootInputFile.exists()) {
      rootInputFile.renameTo(rootOutputFile);
    } else {
      System.out.println("Input file does not exist in the root directory.");
    }

    File rootDocsFolder = new File(rootPath + "docs");
    File rootMyDocsFolder = new File(rootPath + "mydocs");

    if (rootDocsFolder.exists()) {
      rootDocsFolder.renameTo(rootMyDocsFolder);
    } else {
      System.out.println("Docs folder does not exist in the root directory.");
    }
  }
}
