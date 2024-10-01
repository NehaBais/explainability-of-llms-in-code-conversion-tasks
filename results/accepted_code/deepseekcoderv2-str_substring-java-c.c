double[] numbers = {2.0, 4.0, 6.0, 8.0, 10.0};
for (int i = numbers.length - 1; i >= 0; i--) {
  System.out.println("number is " + numbers[i] + " at index " + i);
}
double sum = 0.0;
for (double num : numbers) {
  sum += num;
}
System.out.println("Sum of array elements is: " + sum);