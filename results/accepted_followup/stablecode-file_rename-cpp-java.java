import java.io.File;

public class Main {

    public static void main(String[] args) {
        // Rename a file in current working directory.
        File currentDirectory = new File("."));
        File inputFile = new File(currentDirectory, "input.txt"));
        File outputFile = new File(currentDirectory, "output.txt"));
        inputFile.renameTo(outputFile);

        // Rename a directory in the filesystem root.
        File rootDirectory = new File("/");
        File docsDirectory = new File(rootDirectory, "docs"));
        File mydocsDirectory = new File(rootDirectory, "mydocs"));
        docsDirectory.renameTo(mymdocsDirectory);
      }
}