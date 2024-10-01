package com.example;

public class Concatenation {

  public static void main(String[] args) {
    String s = "hello";
    String s2 = s + " literal";

    System.out.println("C Code:");
    System.out.println("s: " + s);
    System.out.println("s2: " + s2);

    s2 = concatenate(s, " literal");
    System.out.println("Java Code:");
    System.out.println("s2: " + s2);
  }

  public static String concatenate(String str1, String str2) {
    return str1 + str2;
  }
}
