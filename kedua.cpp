#include <iostream>
using namespace std;

struct Barang
{
    string nama;
    int jumlah, harga;

    Barang *prev, *next;
};

Barang *kepala, *bt, *ini, *del, *baru, *after;

void tambahBarang (string namaBarang, int jumlahBarang, int hargaBarang) {
    kepala = new Barang ();
    kepala->nama = namaBarang;
    kepala->jumlah = jumlahBarang;
    kepala->harga = hargaBarang;
    kepala->prev = kepala;
    kepala->next = kepala;
    bt = kepala;
}

void tambahAwal (string namaBarang, int jumlahBarang, int hargaBarang) {
    if (kepala == NULL)
    {
        cout << "Buat Linkedlist dulu" << endl;
    }
    else {
    baru = new Barang ();
    baru->nama = namaBarang;
    baru->jumlah = jumlahBarang;
    baru->harga = hargaBarang;
    baru ->prev = bt;
    baru ->next = kepala;
    kepala->prev = baru;
    bt ->next = baru;
    kepala = baru;
}
}


void tambahTengah (string namaBarang, int jumlahBarang, int hargaBarang, int posisi) {
    if (kepala == NULL)
    {
        cout << "Buat Linkedlist dulu" << endl;
    }
    else {
        if (posisi == 1)
        {
            cout << "Posisi 1 buka posisi tengah" << endl;
        }
        else if (posisi < 1)
        {
            cout << "Posisi diluar jangkauan" << endl;
        }
        else{
    baru = new Barang ();
    baru->nama = namaBarang;
    baru->jumlah = jumlahBarang;
    baru->harga = hargaBarang;

    ini = kepala;
    int nomor = 1;
    while (nomor < posisi - 1)
    {
        ini = ini ->next;
        nomor++;
    }
    after = ini-> next;
    ini ->next = baru;
    after->prev = baru;
    baru->prev = ini;
    baru ->next = after;
}
}
}

void tambahLast (string namaBarang, int jumlahBarang, int hargaBarang) {
    if (kepala == NULL)
    {
        cout << "Buat Linkedlist dulu" << endl;
    }
    else {
    baru = new Barang ();
    baru->nama = namaBarang;
    baru->jumlah = jumlahBarang;
    baru->harga = hargaBarang;
    baru ->prev = bt;
    baru ->next = kepala;
    kepala->prev = baru;
    bt ->next = baru;
    bt = baru;
}
}

void ubahAwal (string namaBarang, int jumlahBarang, int hargaBarang){
    kepala->nama = namaBarang;
    kepala->jumlah = jumlahBarang;
    kepala->harga = hargaBarang;
}

void ubahLast (string namaBarang, int jumlahBarang, int hargaBarang){
    bt->nama = namaBarang;
    bt->jumlah = jumlahBarang;
    bt->harga = hargaBarang;
}


void editTengah(string namaBarag, int jumlahBarang, int hargaBarang, int posisi) {
    if (kepala == NULL)
    {
        cout << "Double Linkedlist belum dibuat";
    }else{
        if (posisi == 1)
        {
            cout << "posisi awal bukan posisi tengah" << endl;
        }else if (posisi < 1)
        {
            cout << "posisi ngawur" << endl;
        }else
        {

        //transfersing
        ini = kepala;
        int nomor = 1;
        while (nomor < posisi)
        {
            ini = ini ->next;
            nomor++;
        }
        ini ->nama = namaBarag;
        ini ->jumlah= jumlahBarang;
        ini ->harga= hargaBarang;
}
}
}


void hapusAwal () {
    del = kepala;
    kepala = kepala->next;
    bt -> next = kepala;
    kepala -> prev = bt;
    delete del;
}

void hapusTengah (int posisi) {
    if (kepala == NULL)
    {
        cout << "Buat Linkedlist dulu" << endl;
    }
    else {
        if (posisi == 1)
        {
            cout << "Posisi 1 buka posisi tengah" << endl;
        }
        else if (posisi < 1)
        {
            cout << "Posisi diluar jangkauan" << endl;
        }
        else{
    ini = kepala;
    int nomor = 1;
    while (nomor < posisi - 1)
    {
        ini = ini ->next;
        nomor++;
    }
    del = ini->next;
    after = del-> next;
    ini->next = after;
    after->prev = ini;
    delete del;
}
}
}

void hapusLast () {
    del = bt;
    bt = bt->prev;
    bt -> next = kepala;
    kepala->prev = bt;
    delete del;
}

void cetak () {
    if (kepala == NULL)
    {
        cout << "Buat Linkedlist dulu" << endl;
    }
    else {
    cout << "Data Barang : " << endl;
    ini = kepala;
    while (ini->next != kepala)
    {
        cout << "Nama Barang : " << ini->nama << endl;
        cout << "Jumlah Barang : " << ini ->jumlah << endl;
        cout << "Haraga Barang : " << ini ->harga << "\n" << endl;
     ini = ini->next;
    }
    cout << "Nama Barang : " << ini->nama << endl;
    cout << "Jumlah Barang : " << ini ->jumlah << "Barang" << endl;
    cout << "Haraga Barang : Rp." << ini ->harga << "\n" << endl;
    }
}

int main () {
    tambahBarang("Meja", 10, 10000);
    tambahAwal("Kursi", 22, 50000);
    tambahLast("Buku", 20, 10000);
    tambahTengah("Polpen", 15, 2500, 2);

    ubahAwal("stopkontak", 10, 11000);
    editTengah("komputer", 11, 17000, 3);
    ubahLast("Tas", 15, 100000);
    cetak();
}