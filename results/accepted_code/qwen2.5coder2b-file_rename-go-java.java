import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Rename in the current working directory
    File inputFile = new File("input.txt");
    File outputFile = new File("output.txt");
    inputFile.renameTo(outputFile);

    // Rename in the filesystem root directory
    File rootInputFile = new File("/");
    File rootOutputFile = new File("/output.txt");
    rootInputFile.renameTo(rootOutputFile);
  }
}
