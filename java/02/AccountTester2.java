public class AccountTester2 {
  public static void main(String[] args) {
    BankAccount bob,  mary, biff;

    bob = BankAccount.sample1();
    mary = BankAccount.sample1();
    biff = BankAccount.sample2();

    mary.setOwnerName("Mary");
    mary.deposit(250);

    System.out.println(bob);
    System.out.println(mary);
    System.out.println(biff);
  }
}
