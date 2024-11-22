#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> judul, genre, durasi, cerita, rate;
    string n, np, gen, tl, syn, rat, mail, password;
    int pil1, pil2, h;
    char t;
    bool tes;
    cout << "=====Login=====" << endl << endl;
    cout << "Masukkan email atau nomor telepon Anda: ";
    cin >> mail;
    system("cls");

    do {
        cout << "=====Selamat Datang di NHCM cin, menyediakan seputar informasi tentang film mendatang=====\n" << endl;
        cout << "1. Daftar Film\n";
        cout << "2. Admin Only\n";
        cout << "3. Exit\n";
        cout << "Masukkan Nomor Pilihan (1-3): ";
        cin >> pil1;
        system("cls");

        switch (pil1) {
            case 1:
                cout << "Daftar Film\n" << endl;
                for (int i = 0; i < judul.size(); i++) {
                    cout << i + 1 << endl;
                    cout << "Judul film         : " << judul[i] << endl;
                    cout << "Genre              : " << genre[i] << endl;
                    cout << "Durasi (per menit) : " << durasi[i] << endl;
                    cout << "Sinopsis           : " << cerita[i] << endl;
                    cout << "Rating Film        : " << rate[i] << endl;
                    cout << endl;
                }
                cout << "\nKembali ke menu utama? (y/n): ";
                cin >> t;
                tes = (t == 'y' || t == 'Y');
                system("cls");
                break;

            case 2:
                cout << "Masukkan Kata Kunci untuk Akses Admin: ";
                cin >> password;
                system("cls");
                if (password == "24*pakkris") {
                    do {
                        cout << "=====Menu Admin=====\n";
                        cout << "1. Input Data Film Terbaru\n";
                        cout << "2. Hapus Data Film\n";
                        cout << "3. Kembali ke Menu Utama\n";
                        cout << "Masukkan Nomor Pilihan (1-3): ";
                        cin >> pil2;
                        system("cls");

                        switch (pil2) {
                            case 1:
                                cin.ignore();
                                cout << "Masukkan Judul Film: ";
                                getline(cin, n);
                                judul.push_back(n);
                                cout << "Masukkan Genre Film (Gunakan koma ',' bila film memiliki lebih dari satu genre): ";
                                cin >> gen;
                                cin.ignore();
                                genre.push_back(gen);
                                cout << "Masukkan Durasi Film (per menit): ";
                                getline(cin, tl);
                                durasi.push_back(tl);
                                cout << "Masukkan Sinopsis: ";
                                getline(cin, syn);
                                cerita.push_back(syn);
                                cout << "Masukkan Rating Film: ";
                                getline(cin, rat);
                                rate.push_back(rat);
                                cout << "\nFilm Telah Ditambahkan\n";
                                break;

                            case 2:
                                for (int i = 0; i < judul.size(); i++) {
                                    cout << "Film ke-" << i + 1 << endl;
                                    cout << "Judul Film         : " << judul[i] << endl;
                                    cout << "Genre              : " << genre[i] << endl;
                                    cout << "Durasi (per menit) : " << durasi[i] << endl;
                                    cout << "Sinopsis           : " << cerita[i] << endl;
                                    cout << "Rating Film        : " << rate[i] << endl;
                                    cout << endl;
                                }
                                cout << "\nData Film Ke Berapa Yang Ingin Dihapus? (Masukkan Angka): ";
                                cin >> h;

                                if (h > 0 && h <= judul.size()) {
                                    judul.erase(judul.begin() + h - 1);
                                    genre.erase(genre.begin() + h - 1);
                                    durasi.erase(durasi.begin() + h - 1);
                                    cerita.erase(cerita.begin() + h - 1);
                                    rate.erase(rate.begin() + h - 1);
                                    cout << "\nData Film ke-" << h << " Telah Dihapus\n";
                                } else {
                                    cout << "Input Tidak Valid!\n";
                                }
                                break;

                            case 3:
                                cout << "Kembali ke Menu Utama...\n";
                                break;

                            default:
                                cout << "Pilihan Tidak Tersedia.\n";
                        }
                        cout << "\n(y/n): ";
                        cin >> t;
                        tes = (t == 'y' || t == 'Y');
                        system("cls");
                    } while (tes && pil2 != 3);
                } else {
                    cout << "Kata Kunci Salah! Kembali ke menu utama? (y/n): ";
                cin >> t;
                tes = (t == 'y' || t == 'Y');}
                system("cls");
                break;

            case 3:
                tes = false;
                break;

            default:
                cout << "Pilihan Tidak Tersedia, Kembali ke Menu Utama? (y/n): ";
                cin >> t;
                tes = (t == 'y' || t == 'Y');
                system("cls");
        }
    } while (tes);
    cout << "Terima Kasih, Sampai Jumpa" << endl;
}
