public class AccountTester {
  public static void main(String[] args) {
    BankAccount ac;
    ac = new BankAccount("che", 666999, 0);
    ac.setBalance(ac.getBalance() + 100);
    System.out.println(ac);
    System.out.println();

    ac = new BankAccount("wang", 777888, 0);
    System.out.println(ac);
    ac.deposit(225.67f);
    ac.deposit(300.00f);
    System.out.println(ac);
    ac.withdraw(400.17f);
    System.out.println(ac);
  }
}
