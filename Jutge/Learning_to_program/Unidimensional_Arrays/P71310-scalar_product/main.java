import java.util.Scanner;
import java.text.DecimalFormat;
import java.math.RoundingMode;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    final DecimalFormat df = new DecimalFormat("0.0000");
    df.setRoundingMode(RoundingMode.HALF_EVEN);
    while (sc.hasNextInt()) {
      int n = sc.nextInt();
      double[] u = new double[n];
      double[] v = new double[n];
      for (int i = 0; i < n; ++i) u[i] = sc.nextDouble();
      for (int i = 0; i < n; ++i) v[i] = sc.nextDouble();
      System.out.println(df.format(Solution.scalarProduct(u, v)));
    }
  }

}
