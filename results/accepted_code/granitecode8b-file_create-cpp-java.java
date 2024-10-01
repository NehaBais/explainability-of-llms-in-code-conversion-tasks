import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws IOException {
    // Create an empty file called "output.txt" in the current working directory and in the root
    // filesystem
    File outputTxt = new File("output.txt");
    if (!outputTxt.exists()) {
      outputTxt.createNewFile();
    }

    Path path = Paths.get("/output.txt");
    if (!Files.exists(path)) {
      Files.createFile(path);
    }

    // Create an empty directory called "docs" in the current working directory and in the root
    // filesystem
    File docs = new File("docs");
    if (!docs.exists()) {
      docs.mkdir();
    }

    Path path2 = Paths.get("/docs");
    if (!Files.exists(path2)) {
      Files.createDirectory(path2);
    }
  }
}
