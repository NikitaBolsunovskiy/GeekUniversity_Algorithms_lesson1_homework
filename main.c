#include <stdio.h>
#include <math.h>
void solution1();
void solution2();
void solution3a();
void solution3b();
void solution4();
void solution5();
void solution6();
void solution7();
void solution8();
void solution9();
void solution10();

int main() {

    //solution1();
    //solution2();
    //solution3a();
    //solution3b();
    //solution4();
    //solution5();
    //solution6();
    //solution7();
    //solution8();
    //solution9();
    solution10();

    return 0;
}

void solution1() {

//    1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где
//    m-масса тела в килограммах, h - рост в метрах.
    double m;
    double h;

    printf("Введите рост: \n");
    scanf("%lf",&h);
    printf("Введите вес: \n");
    scanf("%lf",&m);

    double I = m/pow(h,2);

    printf("Индекс массы тела: %lf",I);

}

void solution2() {

//    2. Найти максимальное из четырех чисел. Массивы не использовать.

    int a;
    int max = 0;

    for(int i = 0; i<4;i++){
        printf("Введите число: \n");
        scanf("%d", &a);

        if (a>max) {
            max = a;
        }

    }

    printf("Максимальное число: %d", max);

}

void solution3a() {
//    3. Написать программу обмена значениями двух целочисленных переменных:
//    a. с использованием третьей переменной;

    int a;
    int b;
    int c;

    printf("Введите число А: \n");
    scanf("%d",&a);
    printf("Введите число Б: \n");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("Число А: %d, Число Б: %d",a,b);

}

void solution3b() {
//    3. Написать программу обмена значениями двух целочисленных переменных:
//    b. *без использования третьей переменной.

    int a;
    int b;

    printf("Введите число А: \n");
    scanf("%d",&a);
    printf("Введите число Б: \n");
    scanf("%d",&b);

    a = a + b;
    b = b - a;
    a = a - b;

    printf("Число А: %d, Число Б: %d",a,b);

}

void solution4() {

//    4. Написать программу нахождения корней заданного квадратного уравнения.
//    ax²+bx+c=0, x=(-b±√D)/2a, D=b²-4ac
    double a;
    double b;
    double c;

    printf("Введите число А: \n");
    scanf("%lf",&a);
    printf("Введите число B: \n");
    scanf("%lf",&b);
    printf("Введите число C: \n");
    scanf("%lf",&c);

    // можно предусмотреть то, что пользователь указал в качетсве a = 0, тогда это линейное уравнение. Не стал этот случай рассматривать.

    double D = b*b-4*a*c;
    double x;

    if (D < 0) {
        printf("Корней нет.\n");
    } else if(D == 0) {
        double x = (0-b)/(2*a);
        printf("единственный корень: %lf \n",x);
    } else {

        double x = (0-b +sqrt(D))/(2*a);
        printf("первый корень: %lf \n",x);
        x = (0-b - sqrt(D))/(2*a);
        printf("второй корень: %lf \n",x);
    }

}

void solution5() {

//    5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.

    int a = 0;

    while(a < 1 || a > 12) {
        printf("Введите номер месяцв: \n");
        scanf("%d", &a);
    }

    if (a < 3 || a == 12 ) {
        printf("Зима");
    } else if (a<6) {
        printf("Весна");
    } else if (a<9) {
        printf("Лето");
    } else {
        printf("Осень");
    }

}

void solution6() {

//    6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год»,
//    «года» или «лет».

    int age = 0;

    while(age < 1 || age > 150) {
        printf("Введите возраст: \n");
        scanf("%d", &age);
    }

    int mod = age%10;

    if(mod == 1) {
        printf("Возраст %d год",age);
    } else if (mod == 0 || mod > 4 || age >=11 && age <= 14) {
        printf("Возраст %d лет",age);
    } else {
        printf("Возраст %d года",age);
    }

}

void solution7() {

//    7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется
//    определить, относятся ли к поля к одному цвету или нет.

    // насколько я понял, если обе координаты точки - четные или нечетные - тогда черные, если одна координата четная, другая нечетная - тогда белые.

    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("Введите x1: \n");
    scanf("%d", &x1);
    printf("Введите y1: \n");
    scanf("%d", &y1);
    printf("Введите x2: \n");
    scanf("%d", &x2);
    printf("Введите y2: \n");
    scanf("%d", &y2);

    int x1mod = x1%2;
    int y1mod = y1%2;
    int x2mod = x2%2;
    int y2mod = y2%2;

    int firstIsBlack = -1;
    int secondIsBlack = -1;

    if (x1mod == y1mod) {
        firstIsBlack = 1;
    } else {
        firstIsBlack = 0;
    }

    if (x2mod == y2mod) {
        secondIsBlack = 1;
    } else {
        secondIsBlack = 0;
    }

    if (firstIsBlack == secondIsBlack) {
        printf("точки одного цвета");
    } else {
        printf("точки разных цветов");
    }
}

void solution8() {
//    8. Ввести a и b и вывести квадраты и кубы чисел от a до b.

    int a = 0;
    int b = 0;

    while (a==b) {
        printf("Введите A: \n");
        scanf("%d", &a);
        printf("Введите B: \n");
        scanf("%d", &b);
    }

    int step = 0;

    if (a > b) {
        step = -1;
    } else {
        step = 1;
    }

    while(a!=b){
        printf("Число: %d, квадрат: %d, куб: %d\n",a,a*a,a*a*a);
        a += step;
    }
    // чтобы попадал и B...
    printf("Число: %d, квадрат: %d, куб: %d\n",a,a*a,a*a*a);

}

void solution9() {
//    9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти
//    частное от деления нацело N на K, а также остаток от этого деления.

    int N = 0;
    int K = 0;

    int mod = 0;
    int quot = 0;

    while (N<=0) {
        printf("Введите N: \n");
        scanf("%d", &N);
    }

    while (K<=0) {
        printf("Введите K: \n");
        scanf("%d", &K);
    }

    if (N<K) {
        quot = 0;
        mod = N;
    } else if (N==K) {
        quot = 1;
    } else {
        while(N>=K) {
            quot += 1;
            N -= K;
        }
        mod = N;
    }

    printf("Частное: %d\n", quot);
    printf("Остаток от деления: %d\n", mod);

}

void solution10(){

//    10. Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления
//    определить, имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет
//    — вывести False.

    int N = 0;

    int res = 0;

    while (N<=0) {
        printf("Введите N: \n");
        scanf("%d", &N);
    }

    while (N>0) {
        res = N%10;
        N/=10;
        if (res%2 == 1) {
            printf("True\n");
            return;
        }
    }
    printf("False\n");
}