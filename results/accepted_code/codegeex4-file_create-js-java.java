import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) {

    // create file and directory in current working directory
    File output = new File("output.txt");
    if (!output.exists()) {
      try {
        output.createNewFile();
      } catch (IOException e) {
        System.out.println(e);
      }
    }

    File docs = new File("docs");
    if (!docs.exists()) {
      docs.mkdir();
    }

    // create file and directory in root
    File rootOutput = new File("/output.txt");
    if (!rootOutput.exists()) {
      try {
        rootOutput.createNewFile();
      } catch (IOException e) {
        System.out.println(e);
      }
    }

    File rootDocs = new File("/docs");
    if (!rootDocs.exists()) {
      rootDocs.mkdir();
    }
  }
}
