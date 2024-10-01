import java.io.File;
import java.io.IOException;

public class FileAndDirectoryCreator {

  public static void create(String directory) throws IOException {
    File outputFile = new File(directory, "output.txt");
    outputFile.createNewFile();

    File docsDirectory = new File(directory, "docs");
    docsDirectory.mkdir();
  }

  public static void main(String[] args) throws IOException {
    create("."); // current directory
    create("/"); // root directory
  }
}
