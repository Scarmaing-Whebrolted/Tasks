#include <iostream>
#include <string>
#include <math.h>
#include <cctype>
#include <unordered_set>
#include <vector>
#include <io.h>
#include <windows.h>
#include <iomanip>
using namespace std;

// string toCamelCase(string text);
//string createPhoneNumber(const int arr[10]);
//bool is_isogram(string str);
//int findOdd(const vector<int>& numbers);
//int score(const vector<int>& dice);
void usleep(__int64 usec);

/*class DigPow
{
public:

    static signed int testNum;
    static int n;
    static signed int Sum;
    static signed int k;
    static int digit;

    static signed int digPow(signed int number, signed int degree)
    {
        
        testNum = number;
        while ((testNum / 10) > 0)  // Quantity of digits
        {
            testNum /= 10;
            n++;
        }

        while (n >= 0)
        {
            testNum = number;
            if ((testNum / pow(10, n) > 1 && testNum / pow(10, n) > 0) || (testNum / pow(10, n) < -1 && testNum / pow(10, n) < 0))
            {
                digit = (int)(testNum / pow(10, n)) % 10;   // 
            }
            else if ((testNum / pow(10, n) < 1 && testNum / pow(10, n) > 0) || testNum / (pow(10, n) > -1 && testNum / pow(10, n) < 0))
            {
                n--;
                continue;
            }
            n--;
            Sum += pow(digit, degree);
            degree++;
        }

        if (Sum % number == 0)
        {
            k = Sum / number;
            return k;
        }
        else if (Sum % number > 0)
        {
            return -1;
        }
        return 0;
    }
};

int DigPow::n = 1;
signed int DigPow::Sum = 0;
int DigPow::digit;
int DigPow::k;
signed int DigPow::testNum;*/

/*class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window) {
        if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h) return -1;
        return (int)floor(log(window / h) / log(bounce)) * 2 + 1;
    }
};*/

int main()
{
    // TASK 10
    /*string line;
    int Count = 0;
    cout << "Please, enter a line: ";
    getline(cin,line);
    for (short i = 0; i < line.size(); i++)
    {
        for (short y = 0; y < line.size(); y++)
        {
            if (line[y] == line[i])
            {
                Count++;
            }
        }
        if (Count == 1)
        {
            cout << "The element has the next number of position: " << line.find_first_of(line[i], 0) << endl;
        }
        Count = 0;

    }*/

    // TASK 11
     /*char line['/0'];
     int Count = 0, Count2 = 0;
     cout << "Enter a line: ";
     cin >> line;
     for (size_t i = 0; i < strlen(line); i++)
     {
         for (size_t q = 0; q < strlen(line); q++)
         {
             if (line[i] == line[q])
             {
                 Count++;
             }
         }
         for (size_t w = 0; w < strlen(line); w++)
         {
             if(line[i] =)
             {
                 cout << "Count of the symbol " << line[i] << " is " << Count << endl;
             }
         }

         Count = 0;*/

    // TASK: Given an array of integers, find the one that appears an odd number of times.
    // There will always be only one integer that appears an odd number of times.

    // 3 LABWORK ASD
   /*double x, ak, a, Sum = 0, eps = (double)pow(10, -4);   // Declaration of x, a1, ak
   bool check = true;

    cout << "Enter x strictly more than -2 and strictly less than 2: ";
    cin >> x;   // Initialization of x
    

    int k = 0, n = 0;  // Declaration and initialization of k 

    while (check)
    {
        while (x <= -2 || x >= 2)
        {
            cout << "Entered value is wrong. Try again: ";
            cin >> x;
        }
        n++;

        if (n <= 10)
        {
            a = (pow(x, 2 * n) * sin(pow(x, n))) / pow(n, 2);
            Sum += a;
        }
        else if (n > 10)    // The beginning of searching a that is less than eps
        {
            if (n == 11)
                cout << "Sum 1 " << Sum << endl;

            a = (pow(x, (2 * n)) * sin(pow(x, n))) / pow(n, 2);
            Sum += a;
            k++;
            if (abs(a) < eps)
            {
                ak = a;
                check = false;
            }
            else if (k >= 999999)
            {
                cout << "An error has occured, enter another x in this range again: ";
                cin >> x;
                n = 0;
                k = 0;
                Sum = 0;
            }
        }

    }

    cout << "The sum of " << k << " elements: " << Sum << endl;*/


    
    

   // DONUT
   /* float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("[2J");
    for (;;) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("[H");
        for (k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }*/

/*vector<int> name{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

for (auto &y : name)
{
    y += 1;
    cout << y << endl;
}*/

double x;
cout << "Enter a number: ";
cin >> x;

double numerator = 1, denominator = 1, a = 0, result;

for (int i = 1; i <= 6; i++)
{
    numerator *= (x - pow(2., i));
}

for (int y = 0; y < 6; y++)
{
    a += pow(2., y);
    denominator *= (x - a);
}
if (denominator == 0)
{
    cout << "Division by zero is forbidden";
}
else
{
    result = numerator / denominator;
    if (result <= DBL_MAX || result >= DBL_MIN)
    {
        cout << setprecision(100) << result;
    }
}








}

// FUNCTIONS

/*void usleep(__int64 usec)
{
    HANDLE timer;
    LARGE_INTEGER ft;

    ft.QuadPart = -(10 * usec); // Convert to 100 nanosecond interval, negative value indicates relative time

    timer = CreateWaitableTimer(NULL, TRUE, NULL);
    SetWaitableTimer(timer, &ft, 0, NULL, NULL, 1);
    WaitForSingleObject(timer, INFINITE);
    CloseHandle(timer);
}*/

/*string toCamelCase(string text)
{
    string temp = "\0";
    for (int i = 0; i < text.size(); i++)
    {
        //if(text[0] == (char)toupper(text[0])

        if (text[i] == '_' || text[i] == '-')
        {
            text.erase(text.find_first_of('_'), 1);
            temp += text[i];
            temp[0] = (char)toupper(temp[0]);
            text.erase(i, 1);
            text.insert(i, temp);
            temp.clear();
        }
        /* else if (text[i] == '-')
         {
             text.erase(text.find_first_of('-'), 1);
             temp += text[i];
             temp[0] = (char)toupper(temp[0]);
             text.erase(i, 1);
             text.insert(i, temp);
             temp.clear();
         }

    }
    return text;
}*/

/*int score(const std::vector<int>& dice) {
    unsigned cs[7] = {};
    for (auto d : dice)
        cs[d]++;
    return
        cs[1] / 3 * 1000 + cs[6] / 3 * 600 + cs[5] / 3 * 500 +
        cs[4] / 3 * 400 + cs[3] / 3 * 300 + cs[2] / 3 * 200 +
        cs[1] % 3 * 100 + cs[5] % 3 * 50;
}*/

// createPhoneNumber
/*string createPhoneNumber(const int arr[10]) {
    char buf[15];
    snprintf(buf, sizeof(buf), "(%d%d%d) %d%d%d-%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
    return buf;
}*/

// is_isogram
/*bool is_isogram(std::string str)
{
    std::unordered_set<char> char_set;
    for (const auto& c : str) {
        auto c_lower = std::tolower(c);
        if (char_set.count(c_lower) == 0) char_set.insert(c_lower);
        else return false;
    }
    return true;
}*/

/*int findOdd(const vector<int>& numbers) {
    for (auto elem : numbers) {
        if (std::count(numbers.begin(), numbers.end(), elem) % 2 != 0) {
            return elem;
        }
    }
    return 0;
}*/



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
