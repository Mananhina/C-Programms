#include <iostream>
using namespace std;

class Complex{
 private:
  double real;
  double image;
 public:
  //Kонструкторы комплексного числа
  Complex() {real = 0; image = 0;}

  Complex(double r, double i) {real = r; image = i;}

  //Сопряженное число
  Complex Conjugate(){
    Complex Result;
    Result.real = real;
    Result.image = -image;
    return Result;
  };


  //Унарный плюс
  Complex operator+(){
    Complex Result;
    Result.real = abs(real);
    Result.image = abs(image);
    return Result;
  }

  //Умножение комплексных чисел
  Complex operator*(Complex C){
    Complex Result;
    Result.real = real * C.real - image * C.image;
    Result.image = real * C.image + image * C.real;
    return Result;
  }

  //Умножение на сопряженное
  double conjmult() {return real*real + image*image;}

  //Деление на действительное число
  Complex operator/(double d){
    Complex Result;
    Result.real = real / d;
    Result.image = image / d;
    return Result;
  }

  //Деление на комплексное число
  Complex operator/(Complex C){
    Complex Result = *this * C.Conjugate();
    return Result/C.conjmult();
  }

  //Деление действительного числа на комплексное
  friend Complex operator/(double d, Complex C);

  //Вывод числа
  void print()
  {
    if (image == 0) {cout << real << "\n";}
    if (real == 0) {cout << image << "i\n";}
    if (image > 0) {cout << real << " + " << image << "i\n";}
    else {cout << real << " - " << -image << "i\n";}
  }
  //Геттеры и сеттеры
  double getReal() {return real;}
  double getImage() {return image;}

  void SetReal(double value) {real = value;}
  void SetImage(double value) {image = value;}

};

Complex operator/(double d, Complex C){
  Complex Result;
  Result.real = d * (C.Conjugate()).real;
  Result.image = d * (C.Conjugate()).image;
  return Result / C.conjmult();
}

int main(){
  Complex Z(-1, -2);
  Complex W(1, -1);

  Z.print();
  (Z.Conjugate()).print(); //Сопряженное для Z
  (Z*W).print(); //Умножение комплексных чисел
  cout << "\n";

  //Для задания 1.1
  (+Z).print();
  (Z/4).print();
  (Z/W).print();
  cout << "\n";

  //Для задания 1.2
  (2/W).print();
  return 0;
}