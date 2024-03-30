#include <iostream>
#include <string>
using namespace std;

class GeometrikSifat {
private:
    string shakl;
    string rang;
    int hajm;
    float balandlik;

public:
    void show() {
        static int k = 0;
        cout << ++k << " - Geometrik sifat:" << endl << endl;
        cout << "Shakli: " << shakl << endl;
        cout << "Rangi: " << rang << endl;
        cout << "Hajmi: " << hajm << endl;
        cout << "Balandligi: " << balandlik << endl << endl;
    }

    void input() {
        static int k = 0;
        cout << ++k << " - Geometrik sifatni kiriting:" << endl << endl;
        cout << "Shakli: "; cin >> shakl;
        cout << "Rangi: "; cin >> rang;
        cout << "Hajmi: "; cin >> hajm;
        cout << "Balandligi: "; cin >> balandlik;
        cout << endl;
    }

    void qidir() {
        int k;
        cout << "Izlash turini kiriting: " << endl;
        cout << "Shakli: 1" << endl;
        cout << "Rangi: 2" << endl;
        cout << "Hajmi: 3" << endl;
        cout << "Balandligi: 4" << endl;
        cin >> k;

        if(k==1) {
            string s;
            cout << "Qidirilayotgan shakl: "; cin >> s;
            if(shakl.compare(s) == 0) {
                cout << "Bunday shaklli geometrik sifat mavjud:" << endl;
                show();
            }
        }

        if(k==2) {
            string s;
            cout << "Qidirilayotgan rang: "; cin >> s;
            if(rang.compare(s) == 0) {
                cout << "Bunday rangli geometrik sifat mavjud:" << endl;
                show();
            }
        }

        if(k==3) {
            int s;
            cout << "Qidirilayotgan hajm: "; cin >> s;
            if(hajm == s) {
                cout << "Bunday hajmli geometrik sifat mavjud:" << endl;
                show();
            }
        }

        if(k==4) {
            float s;
            cout << "Qidirilayotgan balandlik: "; cin >> s;
            if(balandlik == s) {
                cout << "Bunday balandlikli geometrik sifat mavjud:" << endl;
                show();
            }
        }
    }
};

int main() {
    GeometrikSifat g[100];
    int N;
    cout << "Geometrik sifatlar sonini kiriting: "; cin >> N;
    for(int i = 0; i < N; i++) {
        g[i].input();
    }

    for(int i = 0; i < N; i++) {
        g[i].qidir();
    }
}
