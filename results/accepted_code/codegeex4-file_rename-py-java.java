import java.io.File;

public class Main {
  public static void main(String[] args) {
    renameFilesAndDirectoriesInCurrentWorkingDirectory();
    renameFilesAndDirectoriesInFilesystemRoot();
  }

  private static void renameFilesAndDirectoriesInCurrentWorkingDirectory() {
    File inputFile = new File("input.txt");
    File outputFile = new File("output.txt");
    File directory = new File("docs");
    File myDocuments = new File("mydocs");

    inputFile.renameTo(outputFile);
    directory.renameTo(myDocuments);

    // If you want to test the renaming twice as in your Python code, you can uncomment the
    // following lines
    //        outputFile.renameTo(inputFile);
    //        myDocuments.renameTo(directory);
  }

  private static void renameFilesAndDirectoriesInFilesystemRoot() {
    String rootPath = System.getProperty("user.home");
    File inputFile = new File(rootPath + "/input.txt");
    File outputFile = new File(rootPath + "/output.txt");
    File directory = new File(rootPath + "/docs");
    File myDocuments = new File(rootPath + "/mydocs");

    inputFile.renameTo(outputFile);
    directory.renameTo(myDocuments);

    // If you want to test the renaming twice as in your Python code, you can uncomment the
    // following lines
    //        outputFile.renameTo(inputFile);
    //        myDocuments.renameTo(directory);
  }
}
