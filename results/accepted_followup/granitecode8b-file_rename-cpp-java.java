import java.io.File;

public class Rename {
  public static void main(String[] args) {
    File input = new File("input.txt");
    File output = new File("output.txt");
    File docs = new File("docs");
    File mydocs = new File("mydocs");
    input.renameTo(output);
    docs.renameTo(mydocs);
    File rootInput = new File("/");
    File rootOutput = new File("/");
    rootInput = new File(rootInput, "input.txt");
    rootOutput = new File(rootOutput, "output.txt");
    File rootDocs = new File("/");
    File rootMydocs = new File("/");
    rootDocs = new File(rootDocs, "docs");
    rootMydocs = new File(rootMydocs, "mydocs");
    rootInput.renameTo(rootOutput);
    rootDocs.renameTo(rootMydocs);
  }
}
