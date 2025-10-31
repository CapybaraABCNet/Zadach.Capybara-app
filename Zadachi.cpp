#include <iostream>
#include <string>
using namespace std;


void calculator() {
    int one;
    int twotwo;
    char op;
    cout << "Введите 1 число: " << endl;
    cin >> one;
    cout << "Введите 2 число: " << endl;
    cin >> twotwo;
    cout << "Введите математический знак: " << endl;
    cin >> op;
    switch (op) {
    case '+':
        cout << one + twotwo << endl;
        break;
    case '-':
        cout << one - twotwo << endl;
        break;
    case '*':
        cout << one * twotwo << endl;
        break;
    case '/':
        if (twotwo == 0) {
            cout << "На ноль делить нельзя!" << endl;
            
        }
        else {
            cout << one / twotwo << endl;
        }
        break;
    default:
        cout << "Вы видимо написали не тот знак, попробуйте другой" << endl;
        break;
    }
    
}

void stepen() {
    int hhh;
    int st;
    int ttt = 1;
    cout << "Введите число которое должно быть в степени" << endl;
    cin >> hhh;
    cout << "Введите степень" << endl;
    cin >> st;
    for (int i{ 1 }; i < st + 1; i++) {
        ttt *= hhh;
        
    }
    cout << ttt << endl;
}

void two() {
    int twoChislo;
    string t;
    t = "";
    cout << "Введите число которое будет переведенно в двоичную систему: " << endl;
    cin >> twoChislo;
    while (twoChislo > 0) {
        t = to_string(twoChislo % 2) + t; 
        twoChislo /= 2; 
    }
    cout << t << endl;
}

void ymno() {
    int chisl;
    cout << "Введите число с которым нужно сделать таблицу умножения: " << endl;
    cin >> chisl;
    cout << chisl << " * 1 = " << chisl << endl;
    cout << chisl << " * 2 = " << chisl * 2 << endl;
    cout << chisl << " * 3 = " << chisl * 3 << endl;
    cout << chisl << " * 4 = " << chisl * 4 << endl;
    cout << chisl << " * 5 = " << chisl * 5 << endl;
    cout << chisl << " * 6 = " << chisl * 6 << endl;
    cout << chisl << " * 7 = " << chisl * 7 << endl;
    cout << chisl << " * 8 = " << chisl * 8 << endl;
    cout << chisl << " * 9 = " << chisl * 9 << endl;
    cout << chisl << " * 10 = " << chisl * 10 << endl;
    cout << chisl << " * 11 = " << chisl * 11 << endl;
    cout << chisl << " * 12 = " << chisl * 12 << endl;
    cout << chisl << " * 13 = " << chisl * 13 << endl;
    cout << chisl << " * 14 = " << chisl * 14 << endl;
    cout << chisl << " * 15 = " << chisl * 15 << endl;
    cout << chisl << " * 16 = " << chisl * 16 << endl;
    cout << chisl << " * 17 = " << chisl * 17 << endl;
    cout << chisl << " * 18 = " << chisl * 18 << endl;
    cout << chisl << " * 19 = " << chisl * 19 << endl;
    cout << chisl << " * 20 = " << chisl * 20 << endl;
}

void coordinat() {
    int xminus;
    int x;
    int yminus;
    int y;
    cout << "Привет! Введи -x: " << endl;
    cin >> xminus;
    cout << "Введи x: " << endl;
    cin >> x;
    cout << "Введи -y: " << endl;
    cin >> yminus;
    cout << "Введи y: " << endl;
    cin >> y;
    xminus = -(xminus);
    yminus = -(yminus);
    int P = (x + xminus + y + yminus) * 2;
    int S = (xminus + x) * (yminus + y);
    cout << "P = " << P << endl;
    cout << "S = " << S << endl;

}

void p() {
    int vibor;
    int iz;
    int zi;

    cout << "Введите какую фигуру вам нужна:" << endl;
    cout << "1.Квадрат" << endl;
    cout << "2.Прямоугольник" << endl;
    cin >> vibor;

    if (vibor == 1) {
        cout << "Введи сторону квадрата в см:" << endl;
        cin >> iz;
        cout << "P = " << iz * 4 << endl;
        cout << "S = " << iz * iz << endl;
    }
    else if (vibor == 2) {
        cout << "Введите длину прямоугольника в см:" << endl;
        cin >> iz;
        cout << "Введите ширину прямоугольника в см:" << endl;
        cin >> zi;
        cout << "P = " << (iz + zi) * 2 << endl;
        cout << "S = " << zi * iz << endl;
    }
    else {
        cout << "Вы неправильно написали команду, пожалуйста, попробуйте ещё раз" << endl;
    }
    
}

int main()
{
    setlocale(LC_ALL, "Ru");
    int command;
    int ps;
    cout << "Привет! Это приложение Zadach.Capybara, здесь вы можете решать разные математические задачи, например: Нахожление площади и периметра у прямоугольная система координат" << endl;
    cout << "Введите какую задачу надо решить (Вводите цифру команды):" << endl;
    cout << "1.Периметр и Площадь" << endl;
    cout << "2.Cистема координат" << endl;
    cout << "3.Калькулятор" << endl;
    cout << "4.Таблица умножения" << endl;
    cout << "5.2-чная система счисления" << endl;
    cout << "6.Степень" << endl;

    cin >> command;

    if (command == 1) {
        p();
    }
    else if (command == 2) {
        coordinat();
    }
    else if (command == 3) {
        calculator();
    }
    else if (command == 4) {
        ymno();
    }
    else if (command == 5) {
        two();
    }
    else if (command == 6) {
        stepen();
    }
    else {
        cout << "Вы неправильно написали команду, пожалуйста, попробуйте ещё раз" << endl;
    }
}