package com.example;

public class StringComparisonDemo {
  public static void main(String[] args) {
    String a = "ball";
    String b = "bell";

    System.out.println("	eq , ne , gt , lt , ge , le");
    System.out.printf(
        "%s%2d%2d%2d%2d%2d%2d %s",
        a, STREQ(a, b), STRNE(a, b), STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b), b);

    System.out.println();
    a = "BALL";
    b = "bell";

    System.out.printf(
        "%s%2d%2d%2d%2d%2d%2d %s ignoring case",
        a, STREQ(a, b), STRNE(a, b), STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b), b);
  }

  static boolean STREQ(String a, String b) {
    return a.equals(b);
  }

  static boolean STRNE(String a, String b) {
    return !STREQ(a, b);
  }

  static boolean STRGT(String a, String b) {
    return a.compareTo(b) > 0;
  }

  static boolean STRLT(String a, String b) {
    return a.compareTo(b) < 0;
  }

  static boolean STRGE(String a, String b) {
    return a.compareTo(b) >= 0;
  }

  static boolean STRLE(String a, String b) {
    return a.compareTo(b) <= 0;
  }
}
