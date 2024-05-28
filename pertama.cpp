#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, nim, jurusan;

    Mahasiswa *next;
};

Mahasiswa *kepala, *bt, *baru, *ini, *del;

void buatList (string data[3]) {
    kepala = new Mahasiswa();
    kepala->nama = data[0];
    kepala->nim = data[1];
    kepala->jurusan = data[2];
    bt = kepala;
    bt ->next = kepala;
}

void tambahAwal (string data[3]) {
    if (kepala == NULL)
    {
        cout << "Buat Linked List Dulu" << endl;
    }else {
    
    baru = new Mahasiswa();
    baru->nama = data[0];
    baru->nim = data[1];
    baru->jurusan = data[2];
    
    baru->next = kepala;
    bt ->next = baru;
    kepala = baru;
    }
}

void tambahTengah (string data[3], int posisi) {
        if (kepala == NULL)
    {
        cout << "Buat Linked List Dulu" << endl;
    }else {
        if (posisi == 1) {
            cout << "Posisi 1 bukan tengah" << endl;
        }
    else {
        baru = new Mahasiswa();
        baru ->nama = data[0];
        baru ->nim = data[1];
        baru ->jurusan = data[2];

        int nomor = 1;
        ini = kepala;
        while (nomor < posisi -1 )
        {
            ini = ini->next;
            nomor++;
        }
        baru->next = ini ->next;
        ini->next = baru;
    }
}
}

void tambahLast (string data[3]) {
        if (kepala == NULL)
    {
        cout << "Buat Linked List Dulu" << endl;
    }else {
    baru = new Mahasiswa();
    baru->nama = data[0];
    baru->nim = data[1];
    baru->jurusan = data[2];

    baru ->next = kepala;
    bt ->next = baru;
    bt = baru;
}
}

void ubahAwal (string data[3]) {
    kepala->nama = data[0];
    kepala->nim = data[1];
    kepala->jurusan = data[2];
}

void ubahlast (string data[3]) {
    bt->nama = data[0];
    bt->nim = data[1];
    bt->jurusan = data[2];
}

void hapusAwal (){
    del = kepala;
    kepala = kepala->next;
    bt-> next = kepala;
    delete del;
}

void hapusTengah (int posisi) {
     if (kepala == NULL)
    {
        cout << "Buat Linked List Dulu" << endl;
    }else {
        if (posisi == 1) {
            cout << "Posisi 1 bukan tengah" << endl;
        }
    else {
    int nomor =1;
    ini = kepala;
    while (nomor < posisi - 1)
    {
        ini = ini->next;
        nomor++;
    }
    del = ini->next;
    ini->next = del->next;
    delete del;
}}
    }
void hapusLast () {
    del = bt;
    ini = kepala;
    while (ini ->next != bt)
    {
        ini = ini->next;
    }
    bt = ini;
    bt->next = kepala;
    delete del;
}

void cetak() {
    cout << "Data Mahasiswa " << endl;
    cout << "_________________________________________________________________________" << endl;
    cout << "|\t Nama\t\t|\t NIM\t\t|\t Jurusan\t|" <<endl;
    cout << "_________________________________________________________________________" << endl;
    ini = kepala;
    while (ini->next != kepala)
    {
        cout << "| " << ini->nama << "\t\t| " << ini->nim << "\t\t| " << ini->jurusan << "\t\t|" << endl;
        ini = ini -> next;
    }
        cout << "| " << ini->nama << "\t\t| " << ini->nim << "\t\t| " << ini->jurusan << "\t\t|" << endl;
}

int main () {
    string dataBaru[3] = {"Bagus Eko", "202311002", "Informatika"};
    buatList(dataBaru);

    cetak();

    string data1[3] = {"Eko Wijayanto", "20231101", "Teknik Mesin"};
    tambahAwal(data1);

    cetak();

    string data2[3] = {"Joko Widodo", "202311022", "Manajemen"};
    tambahLast(data2);

    cetak();

    string data3[3] = {"Soekarno", "20231002", "Kedokteran"};
    ubahAwal(data3);
    cetak();

    string data4[3] = {"Soeharto", "202311012", "Ilmu Komunikasi"};
    ubahlast(data4);
    cetak();

    string data5[3] = {"Ilma Maulika", "202211013", "Kimia Farmasi"};
    tambahTengah(data5, 6);
    cetak();

    hapusTengah(1);
    cetak();
    // hapusAwal();
    // cetak();
    // hapusLast();
    // cetak();


    return 0;
}