import java.io.*;

public class FileExists {
  public static void main(String[] args) throws IOException {
    String inputFilePath = "input.txt";
    String rootInputFilePath = "c:/input.txt";
    String docsDirectoryPath = "docs";
    String rootDocsDirectoryPath = "c:/docs";

    // Check if the file exists in the current working directory
    File inputFile = new File(inputFilePath);
    boolean isInputFileExists = inputFile.exists();
    System.out.println("Is input.txt file exist: " + isInputFileExists);

    // Check if the file exists in the root of the C drive
    File rootInputFile = new File(rootInputFilePath);
    boolean isRootInputFileExists = rootInputFile.exists();
    System.out.println("Is c:/input.txt file exist: " + isRootInputFileExists);

    // Check if the directory exists in the current working directory
    File docsDirectory = new File(docsDirectoryPath);
    boolean isDocsDirectoryExists = docsDirectory.exists();
    System.out.println("Is docs directory exist: " + isDocsDirectoryExists);

    // Check if the directory exists in the root of the C drive
    File rootDocsDirectory = new File(rootDocsDirectoryPath);
    boolean isRootDocsDirectoryExists = rootDocsDirectory.exists();
    System.out.println("Is c:/docs directory exist: " + isRootDocsDirectoryExists);
  }
}
