public class Converter {
  // 类方法
  public static int centigradeToFahrenheit(int cent) { 
    return (cent * 9 / 5 + 32);
  }

  public static void main(String[] args) {
    System.out.println(centigradeToFahrenheit(40));
  }
}