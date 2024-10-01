import java.io.File;

public class Main {
  public static void main(String[] args) {
    // Rename file/directory "input.txt"->"output.txt" and "docs"->"mydocs" in the current working
    // directory
    renameFiles(new File("."));

    // Rename file/directory "/input.txt"->"/output.txt" and "/docs"->"/mydocs" in the filesystem
    // root
    renameFiles(new File("/"));
  }

  public static void renameFiles(File dir) {
    File inputTxt = new File(dir, "input.txt");
    File outputTxt = new File(dir, "output.txt");
    File docs = new File(dir, "docs");
    File myDocs = new File(dir, "mydocs");

    // Rename files and directories
    inputTxt.renameTo(outputTxt);
    docs.renameTo(myDocs);
  }
}
