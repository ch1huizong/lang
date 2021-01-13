// T: 泛形类

class ShowType {
  public static void show(GeneralType<?> o) { // 通配符
    System.out.println(o.getObj().getClass().getName());
  }
}

public class GeneralType<Type extends Number> { // 有限制的泛型

  private Type object;

  public GeneralType(Type object) {
    this.object = object;
  }

  public Type getObj() {
    return this.object;
  }

  public static void main(String[] args) {
    GeneralType<Integer> i = new GeneralType<Integer>(2);
    GeneralType<Double> d = new GeneralType<Double>(0.33);
    GeneralType<String> s = new GeneralType<String>("hello");

    System.out.println("i.object = " + (Integer) i.getObj());
    System.out.println("d.object = " + (Double) d.getObj());
    System.out.println("s.object = " + (String) s.getObj());

    ShowType.show(i);
    ShowType.show(d);
  }
}
