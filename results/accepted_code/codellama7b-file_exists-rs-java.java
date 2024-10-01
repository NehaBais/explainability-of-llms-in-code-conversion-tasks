import java.io.File;

public class Main {
  public static void main(String[] args) {
    File inputTxt = new File("input.txt");
    File docs = new File("docs");
    File rootInputTxt = new File("/input.txt");
    File rootDocs = new File("/docs");

    if (inputTxt.exists()) {
      System.out.println(inputTxt.getName() + " is a file");
    } else {
      System.out.println(inputTxt.getName() + " does not exist");
    }

    if (docs.exists()) {
      System.out.println(docs.getName() + " is a directory");
    } else {
      System.out.println(docs.getName() + " does not exist");
    }

    if (rootInputTxt.exists()) {
      System.out.println(rootInputTxt.getName() + " is a file");
    } else {
      System.out.println(rootInputTxt.getName() + " does not exist");
    }

    if (rootDocs.exists()) {
      System.out.println(rootDocs.getName() + " is a directory");
    } else {
      System.out.println(rootDocs.getName() + " does not exist");
    }
  }
}
