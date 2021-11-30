#include <iostream>
using namespace std;
int main()
{
    // Задание 1

   setlocale(LC_ALL, "Russian");
    cout << "Задание 1\n\n";
    cout << "Я узнал, что у меня" << endl;
    cout << "Есть огpомная семья —" << endl;
    cout << "И тpопинка, и лесок," << endl;
    cout << "В поле каждый колосок!" << endl;
    cout << "Речка, небо голубое —" << endl;
    cout << "Это все мое, pодное!" << endl;
    cout << "Это Родина моя!" << endl;
    cout << "Всех люблю на свете я!" << endl;
    cout << "\t\tСтихотворение из х/фильма «Брат 2»" << endl;
    cout << "\n";

    // Задание 2
    cout << "Задание 2\n\n";
    cout << "Every" << endl;
    cout << "\thunter" << endl;
    cout << "\t\twants" << endl;
    cout << "\t\t\tto know " << endl;
    cout << "\t\t\t\twhere" << endl;
    cout << "\t\t\t\t\ta pheasant" << endl;
    cout << "\t\t\t\t\t\tsits." << endl;
    cout << "\n";

    // Задание 3
    cout << "Задание 3\n\n";
    cout << "Ремонт стиральных машин-автомат на дому.\n" << endl;
    cout << "Т. 8-029-724-84-30. ООО \"РемСтирМаш\"\n" << endl;
    cout << "УНП 200706158." << endl;
    cout << " 724" <<"\t| 724 |"<< endl;
    cout << " 84" << "\t|  84 |" << endl;
    cout << " 30" << "\t|  30 |" << endl;
    cout << "\n";

   // Задание 4
    cout << "Задание 4\n\n";
    float R1;
    cout << "Введите сопротивление R1:";
    cin >> R1;
    float R2;
    cout << "Введите сопротивление R2:";
    cin >> R2;
    float R3;
    cout << "Введите сопротивление R3:";
    cin >> R3;
    float R0;
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    cout << "Cопротивление R0="<< R0<< endl;
    cout << "\n";
    
   // Задание 5
    cout << "Задание 5\n\n";
    const double pi = 3.14;
    float L;
    cout << "Введите длину окружности L (см.):";
    cin >> L;
    float R;
    R = L / (2 * pi);
    cout << "Радиус окружности R="<<R<<" (см.)"<< endl;
    float S;
    S = pi * R*R;
    cout << "Площадь круга S="<<S <<" (см2)"<< endl;
    cout << "\n";


   // Задание 6
    cout << "Задание 6\n\n";
    int a;
    cout << "Введите величину ускорения a (м/с2):";
    cin >> a;
    float v;
    cout << "Введите величину скорости v (км/ч):";
    cin >> v;
    v = v * 1000 / (60 * 60);
    double t;
    cout << "Введите время движения (ч.):";
    cin >> t;
    t = t* 60*60;
    float S1;
    S1 = (v * t + (a * t * t) / 2)*0.001;
    cout << "Пройденное расстояние S1=" <<S1<< "( км.)"<< endl;
    cout << "\n";


    // Задание 7
    
    cout << "Задание 7\n\n";
    float D1;
    cout << "Введите расстояние в км. до аэропорта  D=";
    cin >> D1;
    float T1;
    cout << "Введите время движения в часах T=";
    cin >> T1;
    float V1;
    V1 = D1/T1;
    cout << "Скорость движения V1=" << V1 <<"(км/ч)" <<endl;
    cout << "\n";

    
    // Задание 8
    cout << "Задание 8\n\n";
    const float Stoim_1_sec=0.5;// - стоимость одной минуты разговора 30 коп.=0,5 руб.
    const int chas = 3600;// переменная для перевода часов в секунды
    const int min = 60;// переменная для перевода минут в секунды
    int  chas1;// - время начала разговора
    int  chas2;// - время окончания разговора
    int  min1;
    int  min2;
    int  sec1;
    int sec2;
    cout << "Введите время начала разговора (час.мин.сек.)" << endl;
    cout << "час:";
    cin >> chas1;
    cout << "мин:";
    cin >> min1;
    cout << "сек:";
    cin >> sec1;
    cout << "\n";
    cout << "Введите время окончания разговора (час.мин.сек.)" << endl;
    cout << "час:" ;
    cin >> chas2;
    cout << "мин:";
    cin >> min2;
    cout << "сек:" ;
    cin >> sec2;
    cout << "\n";
    cout << "\n";
   
    int Vremya_nachala_sec;// - время начала разговора в секундах
    Vremya_nachala_sec = sec1 + min1 * min + chas1 * chas;
    int Vremya_okonchaniya_sec;// - время окончания разговора в секундах
    Vremya_okonchaniya_sec = sec2 + min2 * min + chas2 * chas;
    cout << "Время разговора:" << Vremya_okonchaniya_sec - Vremya_nachala_sec << " сек."<<endl;

    float stoimost;
    stoimost = Stoim_1_sec*(Vremya_okonchaniya_sec - Vremya_nachala_sec);
    cout << "Стоимость разговора составляет:" << stoimost <<"(копеек)=" << stoimost/100<< "(руб.)"<<endl;
    cout << "\n";
    


    // Задание 9
    cout << "Задание 9\n\n";
    float D2;
    cout << "Введите дальность (км.) поездки  D= ";
    cin >> D2;
    float Rb;
    cout << "Введите расход топлива (литров на 100 км.) Rb= ";
    cin >> Rb;
    float AI80;
    cout << "Введите стоимость 1 л. бензина АИ-80 (руб.)";
    cin >> AI80;
    float AI92;
    cout << "Введите стоимость 1 л. бензина АИ-92 (руб.)";
    cin >> AI92;
    float AI95;
    cout << "Введите стоимость 1 л. бензина АИ-95 (руб.)";
    cin >> AI95;
    cout << "\n";

    cout <<" Марка топлива |" << "Cтоимость поездки (руб.)|"<< endl;
    cout <<" АИ-80         |" << D2 * Rb * AI80 / 100 << endl;
    cout << " АИ-92         |" << D2 * Rb * AI92 / 100 << endl;
    cout << " АИ-95         |" << D2 * Rb * AI95 / 100 << endl;
    return 0; 

}
