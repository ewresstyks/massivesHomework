
#include <iostream>
#include <random>
using namespace std;

int main() {
    // 1.
    /* int m[5]{ 1,2,3,4,5 };
     
     for(int i = 0; i < 5; i++){
     cout << m[i] << "\t";
     }
     cout << endl;
     
     for (int i = 4; i >= 0; i = i - 1){
     cout << m[i] << "\t";
     }
     cout << endl; */
    
    //2.
    /*
    int m[20];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 20; i++) {
        int random = rand() %100;
        m[i] = random;
        if (i%2==0){
            cout << m[i] << endl;
        }
    }*/
    //3.
    /*srand(static_cast<unsigned int>(time(0)));
    int m[10];
    int s = 0;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        int random = rand() % 41 - 20;
               m[i] = random;
        cout << m[i] << " ";
        
    if (m[i] > 0) {
                s += m[i];
                count++;
            }
        }
    if (count > 0) {
        double avg = (double)s / count;
        cout << " your result = " << avg << endl;
    }*/
    //4.
    /*
    int m[10];
    int positive = 0;
    int negative = 0;
    int zero = 0;
    srand(static_cast<unsigned int>(time(0)));
    
    for (int i = 0; i < 10; i++) {
        m[i] = rand() % 11 - 5;
        cout << m[i] << " ";
        
        if (m[i] > 0) {
                    positive++;
                } else if (m[i] < 0) {
                    negative++;
                } else {
                    zero++;
                }
    }
    cout << "positive:" << positive << endl;
    cout << "negative:" << negative << endl;
    cout << "zero:" << zero << endl;
    */
    
    int m[10];
    int even = 0;
    int odd = 0;
    int countodd = 0;
    srand(static_cast<unsigned int>(time(0)));
    
    for (int i = 0; i < 10; i++) {
        m[i] = rand() % 100;
        cout << m[i] << " ";
        
        if (m[i] % 2 == 0) {
            even += m[i];
        } else {
            odd += m[i];
            countodd++;
        }
    }
        if (countodd > 0) {
            double oddA = (double) odd / countodd;
            cout << " your result = " << oddA << endl;
        }
}

