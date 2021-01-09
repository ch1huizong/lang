#include <iostream>

class A {
  friend class B;

public:
  A(int x = 0) : x(x){};
  void display() { std::cout << x << std::endl; }

private:
  int x;
};

class B {
public:
  B(A a) : a(a){};

  void set(int i);
  void display();

private:
  A a;
};

void B::set(int i) { a.x = i; }

void B::display() { a.display(); }

int main(int argc, char *argv[]) {
  A a;
  B b(a);
  b.set(777);
  b.display();
  return 0;
}
