package com.example;

public class StringComparison {
  public static void main(String[] args) {
    // Java language string comparison operators:
    String c = "cat";
    String d = "dog";

    if (c.equals(d)) {
      System.out.println(c + " is equal to " + d);
    } else {
      System.out.println(c + " is not equal to " + d);
    }

    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically greater than " + d);
    }

    if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexically less than " + d);
    }

    if (c.compareTo(d) >= 0) {
      System.out.println(c + " is lexically greater than or equal to " + d);
    }

    if (c.compareTo(d) <= 0) {
      System.out.println(c + " is lexically less than or equal to " + d);
    }

    // Java is case sensitive by default and will not directly compare a value of string
    // type to a value of numeric type.

    // A case insensitive compare can be done with the String#equalsIgnoreCase method:
    if (c.equalsIgnoreCase(d)) {
      System.out.println(c + " is equal to " + d);
    } else {
      System.out.println(c + " is not equal to " + d);
    }

    // Seeing that the built in operators work bytewise and the library
    // case folding functions interpret UTF-8, you might then ask about
    // other equality and inequality tests that interpret UTF-8.
    // Functions for this are not in the Go standard library but are in
    // the Go "sub repository" at golang.org/x/text.  There is support
    // for Unicode normalization, collation tables, and locale sensitive
    // comparisons.
  }
}
