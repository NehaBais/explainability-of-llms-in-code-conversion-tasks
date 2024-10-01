import java.io.File;
import java.io.IOException;

public class FileCreation {

  public static void main(String[] args) throws IOException {
    // Create an empty file called "output.txt" in the current working directory
    File file = new File("output.txt");
    file.createNewFile();

    // Create an empty directory called "docs" in the current working directory
    File directory = new File("docs");
    directory.mkdir();

    // Create an empty file called "output.txt" in the filesystem root
    File fileRoot = new File("/output.txt");
    fileRoot.createNewFile();

    // Create an empty directory called "docs" in the filesystem root
    File directoryRoot = new File("/docs");
    directoryRoot.mkdir();
  }
}
