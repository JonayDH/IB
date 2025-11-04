import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int d = sc.nextInt();
      int m = sc.nextInt();
      int a = sc.nextInt();
      System.out.println(Solution.isValidDate(d, m, a) ? "true" : "false");
    }
    
  }

}
