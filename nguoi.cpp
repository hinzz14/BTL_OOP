#include<bits/stdc++.h>
using namespace std;

class Nguoi{
protected:
    string HoTen;
public:
    Nguoi(string hoten = ""){
        HoTen = hoten;
    }
    
    void setHoTen(string hoten) {
        HoTen = hoten;
    }

    string getHoTen() {
        return HoTen;
    }

    void nhap(){
        cout<<"Nhap ten: "; 
        getline(cin, HoTen);
    }
};

class SinhVien : public Nguoi {
    string MSV;
    string NganhHoc;
public:
    SinhVien(string msv = "", string hoten = "", string nganhhoc = "") : Nguoi(hoten) {
        MSV = msv;
        NganhHoc = nganhhoc;
    }

    void setMSV(string msv) {
        MSV = msv;
    }

    void setNganhHoc(string nganhhoc) {
        NganhHoc = nganhhoc;
    }

    string getMSV() {
        return MSV;
    }

    string getNganhHoc() {
        return NganhHoc;
    }

    string toString() {
        stringstream ss;
        ss<<MSV<<","<<HoTen<<","<<NganhHoc;
        return ss.str();
    }

    void fromFile(string line) {
        stringstream ss(line);
        getline(ss, MSV, ',');
        getline(ss, HoTen, ',');
        getline(ss, NganhHoc, ',');
    }

    void print() {
        cout << setw(10) << left << MSV
             << setw(30) << left << HoTen
             << setw(10) << left << NganhHoc << endl;
    }
    
    void nhap(){
        cin.ignore();
        cout<<"Nhap ma sinh vien: "; getline(cin, MSV);
        Nguoi::nhap();
        cout<<"Nhap nganh hoc: "; getline(cin, NganhHoc);
    }
};


class ThuThu : public Nguoi {
    string MTT;
public:
    ThuThu(string mtt = "", string hoten = "") : Nguoi(hoten) {
        MTT = mtt;
    }

    void setMTT(string mtt) {
        MTT = mtt;
    }

    string getMTT() {
        return MTT;
    }

    string toString() {
        stringstream ss;
        ss<<MTT<<","<<HoTen;
        return ss.str();
    }

    void fromFile(string line) {
        stringstream ss(line);
        getline(ss, MTT, ',');
        getline(ss, HoTen);
    }

    void print() {
        cout << setw(10) << left << MTT
             << setw(30) << left << HoTen << endl;
    }
    
    void nhap() {
        cin.ignore();
        cout<<"Nhap ma thu thu: "; getline(cin, MTT);
        Nguoi::nhap();
    }
};