package main;

import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File("input.txt");
    if (file.exists() && file.isFile()) {
      System.out.println(file.getName() + " is a file");
    } else if (file.exists() && file.isDirectory()) {
      System.out.println(file.getName() + " is a directory");
    }

    File rootDir = new File("/");
    if (rootDir.exists() && rootDir.isDirectory()) {
      System.out.println(rootDir.getName() + " is a directory");
    } else if (rootDir.exists() && rootDir.isFile()) {
      System.out.println(rootDir.getName() + " is a file");
    }
  }
}
