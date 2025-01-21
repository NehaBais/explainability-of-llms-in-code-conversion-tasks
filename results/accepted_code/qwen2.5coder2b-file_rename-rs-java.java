import java.io.File;

public class Main {
  public static void main(String[] args) {
    String err = "File move error";

    try {
      // Rename the file in the current working directory
      File inputFile = new File("input.txt");
      File outputFile = new File("output.txt");
      if (inputFile.renameTo(outputFile)) {
        System.out.println("File 'input.txt' renamed successfully to 'output.txt'");
      } else {
        throw new Exception(err);
      }
    } catch (Exception e) {
      e.printStackTrace();
    }

    try {
      // Rename the directory in the current working directory
      File inputDir = new File("docs");
      File outputDir = new File("mydocs");
      if (inputDir.renameTo(outputDir)) {
        System.out.println("Directory 'docs' renamed successfully to 'mydocs'");
      } else {
        throw new Exception(err);
      }
    } catch (Exception e) {
      e.printStackTrace();
    }

    try {
      // Rename the file in the filesystem root
      File inputFileRoot = new File("/input.txt");
      File outputFileRoot = new File("/output.txt");
      if (inputFileRoot.renameTo(outputFileRoot)) {
        System.out.println("File '/input.txt' renamed successfully to '/output.txt'");
      } else {
        throw new Exception(err);
      }
    } catch (Exception e) {
      e.printStackTrace();
    }

    try {
      // Rename the directory in the filesystem root
      File inputDirRoot = new File("/docs");
      File outputFileDirRoot = new File("/mydocs");
      if (inputDirRoot.renameTo(outputFileDirRoot)) {
        System.out.println("Directory '/docs' renamed successfully to '/mydocs'");
      } else {
        throw new Exception(err);
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
