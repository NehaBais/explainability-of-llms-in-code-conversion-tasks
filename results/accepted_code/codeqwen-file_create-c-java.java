import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    try {
      // Create an empty file in the current directory with 0640 permissions
      File output = new File("output.txt");
      if (output.createNewFile()) {
        System.out.println("File " + output.getName() + " is created!");
      } else {
        System.out.println("File already exists.");
      }

      // Create an empty directory in the current directory with 0750 permissions
      File docs = new File("docs");
      if (docs.mkdir()) {
        System.out.println("Directory " + docs.getName() + " Is created!");
      } else {
        System.out.println("Directory already exists.");
      }

      // Create an empty file in the root directory with 0640 permissions
      File outputRoot = new File("/output.txt");
      if (outputRoot.createNewFile()) {
        System.out.println("File " + outputRoot.getName() + " Is created!");
      } else {
        System.out.println("File already exists.");
      }

      // Create an empty directory in the root directory with 0750 permissions
      File docsRoot = new File("/docs");
      if (docsRoot.mkdir()) {
        System.out.println("Directory " + docsRoot.getName() + " Is created!");
      } else {
        System.out.println("Directory already exists.");
      }

    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
