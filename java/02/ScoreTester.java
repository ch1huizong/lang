public class ScoreTester {
  public static void giveScore(Score s) {
    switch (s) {
      case EXCELLENT:
        System.out.println("Excellent");
        break;
      case QUALIFIED:
        System.out.println("Qualified");
        break;
      case FAILED:
        System.out.println("Failed");
        break;
    }
  }

  public static void main(String[] args) {
    giveScore(Score.EXCELLENT);
  }
}
