// T: 银行帐号综合类
import java.text.DecimalFormat;

public class BankAccount {
  private static int LAST_ACCOUNT_NUMBER = 0;
  private String ownerName;
  private int accountNumber;
  private float balance;

  public BankAccount() {
    this("", 0.0f);
  }

  public BankAccount(String initName) {
    this(initName, 0.0f);
  }

  public BankAccount(String initName, float initBalance) {
    ownerName = initName;
    accountNumber = ++LAST_ACCOUNT_NUMBER;
    balance = initBalance;
  }

  public String toString() {
    return ("Account #"
        + accountNumber
        + " with balance "
        + new DecimalFormat("$0.00").format(balance));
  }

  public String getOwnerName() {
    return ownerName;
  }

  public int getAccountNumber() {
    return accountNumber;
  }

  public float getBalance() {
    return balance;
  }

  public void setOwnerName(String newName) {
    ownerName = newName;
  }

  /*
  public void setAccountNumber(int newNum) {
    accountNumber = newNum;
  }

  public void setBalance(float newBalance) {
    balance = newBalance;
  }
  */

  public float deposit(float anAmount) {
    balance += anAmount;
    return balance;
  }

  public float withdraw(float anAmount) {
    if (anAmount <= balance) {
      balance -= anAmount;
    }

    return balance;
  }

  public static BankAccount sample1() {
    BankAccount ac = new BankAccount();
    ac.setOwnerName("che");
    //ac.setAccountNumber(554000);
    ac.deposit(1000);

    return ac;
  }

  public static BankAccount sample2() {
    BankAccount ac = new BankAccount();
    ac.setOwnerName("yu");
    //ac.setAccountNumber(554001);
    ac.deposit(1000);
    ac.deposit(2000);

    return ac;
  }

  public static BankAccount sample3() {
    BankAccount ac = new BankAccount();
    ac.setOwnerName("wang");
    //ac.setAccountNumber(554002);

    return ac;
  }
}
