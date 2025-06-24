//#include <iostream>
//
//using namespace std;
//template<class T>
//class math {
//private:
//    T a;
//    T b;
//public:
//    math(T a, T b) {
//        this->a = a;
//        this->b = b;
//    }
//    
//    void show() {
//        cout << a << " " << b << endl;
//    }
//
//    T add() {
//        return a + b;
//    }
//
//    T minus() {
//        return a - b;
//    }
//
//    T division() {
//        if (b != 0) {
//            return a / b;
//        }
//        else {
//            return "Its impossible"
//        }
//    }
//
//    T multy() {
//        return a * b;
//    }
//
//    T isPrime() {
//        int mass[9] = { 2,3,4,5,6,7,8,9,10 };
//        int zmina_a = 0;
//        int temp;
//        int temp_a;
//        int temp_b;
//        for (int i = 0; i < 9; i++)
//        {
//            if (a != mass[i]) {
//                if (a % mass[i] == 0) {
//                    zmina_a++;
//                }
//            }
//        }
//        if (zmina_a == 0) {
//            temp++;
//            temp_a++;
//        }
//
//        int zmina_b = 0;
//        for (int i = 0; i < 9; i++)
//        {
//            if (b != mass[i]) {
//                if (b % mass[i] == 0) {
//                    zmina_b++;
//                }
//            }
//        }
//        if (zmina_b == 0) {
//            temp++;
//            temp_b++;
//        }
//
//        if (temp == 0) {
//            return "dvoe czysel ne prosti";
//        }
//        else if (temp == 1) {
//            if (temp == temp_a) {
//                return "tilki a proste";
//            }
//            else if (temp == temp_b) {
//                return "tilki b proste";
//            }
//        }
//        else if (temp == 2) {
//            return "dva czysla prostych"
//        }
//    }
//
//    T isTwin() {
//        if (a % 2 == 0 && b % 2 == 0) {
//            return "a and b parni"
//        }
//        else if (a % 2 == 0 && b % 2 != 0) {
//            return "a parne, b ne parne"
//        }
//        else if (a % 2 != 0 && b % 2 == 0) {
//            return "a ne parne, b parne"
//        }
//        else if (a % 2 != 0 && b % 2 != 0) {
//            return "a ne parne, b ne parne"
//        }
//    }
//
//    T pow_a_b() {
//        int ask = 0;
//        cout << "Якщо ви хочете а піднести пишіть 1, а якщо б то 2: ";
//        cin >> ask;
//        int ask_stepin;
//        cout << endl;
//        cout << "Enter stepin" << endl;
//        cin >> ask_stepin;
//        if (ask == 1) {
//            return pow(a, ask_stepin);
//        }
//        else if (ask == 2) {
//            return pow(b, ask_stepin);
//        }
//
//    }   
//};
//
////template<class T>
////T add_two_numbers(T a, T b) {
////    return a + b;
////}
//
//template<class T>
//T serednie_of_masive(T mass[], const int size) {
//    T serednie;
//    T suma;
//    for (int i = 0; i < size; i++)
//    {
//        suma += mass[i];
//    }
//    serednie = suma / size;
//    return serednie;
//}
//
//template<class T2>
//T2 max_of_parametres(T2 par1, T2 par2, T2 par3) {
//    if (par1 > par2 && par1 > par3) {
//        return par1;
//    }
//    else if (par2 > par1 && par2 > par3) {
//        return par2
//    }
//    else if (par3 > par1 && par3 > par2) {
//        return par3
//    }
//}
//
//template<class T3>
//T3 max_of_parametres(T3 par1, T3 par2, T3 par3) {
//    if (par1 < par2 && par1 < par3) {
//        return par1;
//    }
//    else if (par2 < par1 && par2 < par3) {
//        return par2
//    }
//    else if (par3 < par1 && par3 < par2) {
//        return par3
//    }
//}
//
//
//
//int main()
//{
//    math<int> obj1(1, 2);
//    obj1.show();
//}
// 
// 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string line = "hellow hellow world and it";
	string line1 = "qwe";
	string result = line + line1;
	result += line;
	cout << line.length() << endl;
	cout << line.size() << endl; // to same
	cout << line.find("e") << endl;
	line.erase(0,6); // vudalenia dekilokoh symboliv
	cout << line << endl;
	line.insert(0, "HW"); // vkladenia
	cout << line << endl;
	line.clear();
}
