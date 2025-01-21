import java.io.File;
import java.io.IOException;

public class FileCreator {
  public static void main(String[] args) {
    try {
      // Create file "output.txt" in the current working directory
      File outputFileHere = new File("output.txt");
      if (outputFileHere.createNewFile()) {
        System.out.println("File 'output.txt' created in current working directory.");
      } else {
        System.out.println("File 'output.txt' already exists in current working directory.");
      }

      // Create file "output.txt" in the root directory
      File outputFileRoot = new File("/output.txt");
      if (outputFileRoot.createNewFile()) {
        System.out.println("File '/output.txt' created in root directory.");
      } else {
        System.out.println("File '/output.txt' already exists in root directory.");
      }

      // Create directory "docs" in the current working directory
      File docsDirHere = new File("docs");
      if (docsDirHere.mkdir()) {
        System.out.println("Directory 'docs' created in current working directory.");
      } else {
        System.out.println("Directory 'docs' already exists in current working directory.");
      }

      // Create directory "docs" in the root directory
      File docsDirRoot = new File("/docs");
      if (docsDirRoot.mkdir()) {
        System.out.println("Directory '/docs' created in root directory.");
      } else {
        System.out.println("Directory '/docs' already exists in root directory.");
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
