import java.io.File;

public class RenameFiles {
  public static void main(String[] args) {
    File input = new File("input.txt");
    File output = new File("output.txt");
    File docs = new File("docs");
    File mydocs = new File("mydocs");

    // Rename the file in the current working directory
    if (input.exists() && !output.exists()) {
      input.renameTo(output);
    }

    // Rename the directory in the current working directory
    if (docs.exists() && !mydocs.exists()) {
      docs.renameTo(mydocs);
    }

    // Rename the file in the root directory
    File rootInput = new File("/");
    File rootOutput = new File("/output.txt");
    File rootDocs = new File("/");
    File rootMydocs = new File("/mydocs");

    if (rootInput.exists() && input.exists() && !rootOutput.exists()) {
      rootInput.renameTo(rootOutput);
    }

    // Rename the directory in the root directory
    if (rootInput.exists() && docs.exists() && !rootMydocs.exists()) {
      rootInput.renameTo(rootMydocs);
    }
  }
}
