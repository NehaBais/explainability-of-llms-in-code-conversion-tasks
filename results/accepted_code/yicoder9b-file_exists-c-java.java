import java.io.*;

public class Main {
  public static void main(String[] args) {
    File inputTxt = new File("input.txt");
    File docsDir = new File("docs");
    File rootInputTxt = new File("/input.txt");
    File rootDocsDir = new File("/docs");

    System.out.println(
        "input.txt exists? " + (inputTxt.exists() && inputTxt.isFile() ? "yes" : "no"));
    System.out.println(
        "docs exists? " + (docsDir.exists() && docsDir.isDirectory() ? "yes" : "no"));
    System.out.println(
        "/input.txt exists? " + (rootInputTxt.exists() && rootInputTxt.isFile() ? "yes" : "no"));
    System.out.println(
        "/docs exists? " + (rootDocsDir.exists() && rootDocsDir.isDirectory() ? "yes" : "no"));
  }
}
