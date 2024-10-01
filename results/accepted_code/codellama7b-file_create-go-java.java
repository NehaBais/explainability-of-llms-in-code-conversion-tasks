package main;

import java.io.*;

public class FileSystemMain {
  public static void main(String[] args) {
    try {
      File file = new File("input.txt");
      if (!file.exists()) {
        if (file.createNewFile()) {
          System.out.println("File created: " + file.getAbsolutePath());
        } else {
          System.err.println("Failed to create file: " + file.getAbsolutePath());
        }
      }
      file = new File("/input.txt");
      if (!file.exists()) {
        if (file.createNewFile()) {
          System.out.println("File created: " + file.getAbsolutePath());
        } else {
          System.err.println("Failed to create file: " + file.getAbsolutePath());
        }
      }
      file = new File("docs");
      if (!file.exists()) {
        if (file.mkdirs()) {
          System.out.println("Directory created: " + file.getAbsolutePath());
        } else {
          System.err.println("Failed to create directory: " + file.getAbsolutePath());
        }
      }
      file = new File("/docs");
      if (!file.exists()) {
        if (file.mkdirs()) {
          System.out.println("Directory created: " + file.getAbsolutePath());
        } else {
          System.err.println("Failed to create directory: " + file.getAbsolutePath());
        }
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
