// T: 写文本文件 - BufferedWriter

import java.io.*;

public class BufferedWriterTester {
  public static void main(String[] args) throws IOException {
    String name = "newHello.txt";
    BufferedWriter out = new BufferedWriter(new FileWriter(name));

    out.write("Hello!");
    out.newLine();
    out.write("This is another text file using BufferedWriter,");
    out.newLine();
    out.write("So I can use a common way to start a newline.");
    out.close();
  }
}
