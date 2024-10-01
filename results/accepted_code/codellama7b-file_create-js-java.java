import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File outputFile = new File("output.txt");
    outputFile.createNewFile();

    File rootOutputFile = new File("/output.txt");
    rootOutputFile.createNewFile();

    File docDirectory = new File("docs");
    docDirectory.mkdirs();

    File rootDocDirectory = new File("/docs");
    rootDocDirectory.mkdirs();
  }
}
