package main;

import java.io.*;

public class Main {
  public static void main(String[] args) {
    // String variable equal to any text value
    String s = "hello";

    System.out.println(s);

    // This output was requested by the original task description, although it is not really
    // required by the current wording of the task description
    System.out.println(s + "literal");

    // Concatinate variable and literal, assign result to another string variable
    String s2 = s + "literal";

    System.out.println(s2);
  }
}
