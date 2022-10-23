#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
  //  Series1◦
       // .Даны десять вещественных чисел.Найти их сумму
   /* double sum = 0;
    int i = 1;
    double x;
    while (i <= 10) {
        cin >> x;
        sum = sum + x;
        i += 1;
    }
    cout << sum << endl;*/
  //  Series2.Даны десять вещественных чисел.Найти их произведение.
    /*double sum = 1;
    int i = 1;
    double x;
    while (i <= 10) {
        cin >> x;
        sum = sum * x;
        i += 1;
    }
    cout << sum << endl;*/
   // Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
   /* double sum = 0;
    int i = 1;
    double x;
    while (i <= 10) {
        cin >> x;
        sum = sum + x / 10;
        i += 1;
    }
    cout << sum << endl;*/
   // Series4.Дано целое число N и набор из N вещественных чисел.Вывести
      //  сумму и произведение чисел из данного набора.
    /*double sum = 0, pr = 1;
    int n;
    double be;
    cin >> n;
    for (int i = 1; i <= n; i += 1) {
        cin >> be;
        sum = sum + be;
        pr = pr * be;
    }
    cout << sum << endl;
    cout << pr << endl;*/
   /* Series5.Дано целое число N и набор из N положительных вещественных
        чисел.Вывести в том же порядке целые части всех чисел из данного
        набора(как вещественные числа с нулевой дробной частью), а также
        сумму всех целых частей.*/
   /* int n, sum = 0;
    double be;
    cin >> n;
    for (int i = 1; i <= n; i += 1) {
        cin >> be;
        cout << (int)be << endl;
        sum = sum + be;
    }
    cout << sum << endl;*/
   /* Series6.Дано целое число N и набор из N положительных вещественных
        чисел.Вывести в том же порядке дробные части всех чисел из данного набора(как вещественные числа с нулевой целой частью), а также
        произведение всех дробных частей.*/
   /* int n;
    double sum = 1;
        double be;
        cin >> n;
        for (int i = 1; i <= n; i += 1) {
            cin >> be;
            cout << be -(int)be << endl;
            sum = sum * (be - (int)be) * (-1);
        }
        cout << sum << endl;*/












    return 0;
}


