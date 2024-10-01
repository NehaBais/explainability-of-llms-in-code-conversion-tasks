import java.io.File;
import java.nio.file.Files;

public class CreateEmptyFileAndDirectory {
  public static void main(String[] args) throws Exception {
    // create empty file in current directory
    File file = new File("output.txt");
    Files.createFile(file.toPath());

    // create directory in current directory
    File dir = new File("docs");
    dir.mkdir();

    // create empty file in root directory
    File rootFile = new File("/output.txt");
    Files.createFile(rootFile.toPath());

    // create directory in root directory
    File rootDir = new File("/docs");
    rootDir.mkdir();
  }
}
