package main;

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter first number: ");
    int num1 = sc.nextInt();
    System.out.print("Enter second number: ");
    int num2 = sc.nextInt();
    if (num1 < num2) {
      System.out.println(num1 + " is less than " + num2);
    } else if (num1 == num2) {
      System.out.println(num1 + " is equal to " + num2);
    } else {
      System.out.println(num1 + " is greater than " + num2);
    }
  }
}
