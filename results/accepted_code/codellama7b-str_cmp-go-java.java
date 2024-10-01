package main;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // Go language string comparison operators:
    String c = "cat";
    String d = "dog";
    if (c.equals(d)) {
      System.out.println(c + " is bytewise identical to " + d);
    } else {
      System.out.println(c + " is bytewise different from " + d);
    }
    if (!c.equals(d)) {
      System.out.println(c + " is lexically bytewise greater than " + d);
    } else {
      System.out.println(c + " is lexically bytewise less than " + d);
    }

    // A case insensitive compare can be done with a function in the strings package:
    String eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if (c.toLowerCase().equals(d.toLowerCase())) {
      System.out.println(c + " equal to " + d + eqf);
    } else {
      System.out.println(c + " not equal to " + d + eqf);
    }

    // Seeing that the built in operators work bytewise and the library case folding functions
    // interpret UTF-8, you might then ask about other equality and inequality tests that interpret
    // UTF-8.
    // Functions for this are not in the Go standard library but are in the Go "sub repository" at
    // golang.org/x/text. There is support for Unicode normalization, collation tables, and locale
    // sensitive comparisons.
  }
}
