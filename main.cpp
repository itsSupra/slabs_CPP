#include <iostream>

using namespace std;

int main() {
    cout << "Task 10" << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;

    cout << endl << "Task 2" << endl;
    signed char sig_char = '11';
    unsigned char unsig_char = '11';
    cout << "Signed char:" << sig_char << endl;
    cout << "Unsigned char:" << unsig_char << endl;

    cout << endl << "Task 3" << endl;
    const int def = 7;
    const int u = 7u;
    const int l = 7l;
    const int comb = 7ul;
    const int eight = 07;
    const int sixteen = 0x7;
    cout << "Default const: " << def << endl;
    cout << "U const: " << u << endl;
    cout << "L const: " << l << endl;
    cout << "Combination const: " << comb << endl;
    cout << "Eight const: " << eight << endl;
    cout << "Sixteen const: " << sixteen << endl;

    const double simp = 0.5;
    const double exp = 5;
    const float f = 0.5f;
    const double L = 0.5l;
    const double E = 2.5e5;
    cout << "Simple: " << simp << endl;
    cout << "Float: " << f << endl;
    cout << "L: " << L << endl;
    cout << "E: " << E << endl;
    cout << "Exponential : " << scientific << exp << endl;

    const char a = 'ciberdron';
    cout << "\0" << a << endl;
    cout << "\a" << a << endl;
    cout << "\b" << a << endl;
    cout << "\t" << a << endl;
    cout << "\n" << a << endl;
    cout << "\v" << a << endl;
    cout << "\f" << a << endl;
    cout << "\r" << a << endl;

    cout << endl << "Task 4" << endl;
    char ar = '2';
    cout << static_cast<int> (ar) << endl;

    /* cout << endl << "Task 5" << endl;
     const int int_const = 08;
     const double real_const = 0.5e;
     const char problem = 8r;*/

    cout << endl << "Task 6" << endl;
    int c = 5; // копирующая инициализация
    int i(5); // прямая инициализация
    int b{5}; // uniform-инициализация
    int e{}; // инициализация переменной по умолчанию значением 0 (ноль)
    int rdron{45}; // ошибка: целочисленная переменная не может содержать нецелочисленные значения

    cout << endl << "Task 7" << endl;
    static const int static_int = 88;
    static const string static_string = "Static string";

    const auto auto_number = 1024;
    const auto auto_string = "Auto string";


    cout << endl << "Task 8" << endl;

    int we = -4 % 3;
    int ew = -4 % -3;
    cout << we << endl;
    cout << ew << endl;

    cout << endl << "Task 9" << endl;
    bool x = true, y = true, k = false, q, w, t, r;
    w = x == y;
    q = x == y && k;
    t = x != y;
    r = x != y && k;
    cout << w << endl;
    cout << q << endl;
    cout << t << endl;
    cout << r << endl;

    cout << endl << "Task 10" << endl;
    // cout << "Type: " << sizeof (int) << endl;

   int sad = 0xffffffff80000000;
    cout << sad << endl;


    return 0;


}
