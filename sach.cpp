#include<bits/stdc++.h>
using namespace std;

class Sach{
    string MaSach;
    string TenSach;
    string TheLoai;
    string TacGia;
    int NamXuatBan;
    long long Gia;
    int SoLuong;
    int DaMuon;
public:
    Sach(string Ma = "", string Ten = "", string Loai = "", string TG = "", int NXB = 0, long long gia = 0, int SL = 0) {
        MaSach = Ma;
        TenSach = Ten;
        TheLoai = Loai;
        TacGia = TG;
        NamXuatBan = NXB;
        Gia = gia;
        SoLuong = SL;
        DaMuon = 0; 
    }

    void setMaSach(string Ma) {
        MaSach = Ma;
    }

    void setGia(long long gia) {
        Gia = gia;
    }

    void setTenSach(string Ten) {
        TenSach = Ten;
    }

    void setTheLoai(string Loai) {
        TheLoai = Loai;
    }

    void setTacGia(string TG) {
        TacGia = TG;
    }

    void setNamXuatBan(int NXB) {
        NamXuatBan = NXB;
    }

    void setSoLuong(int SL) {
        SoLuong = SL;
    }

    string getMaSach() {
        return MaSach;
    }

    long long getGia() {
        return Gia;
    }

    string getTenSach() {
        return TenSach;
    }

    string getTheLoai() {
        return TheLoai;
    }

    string getTacGia() {
        return TacGia;
    }

    int getNamXuatBan() {
        return NamXuatBan;
    }

    int getSoLuong() {
        return SoLuong;
    }

    int getDaMuon(){
        return DaMuon;
    }

    void MuonSach(){
        DaMuon++;
    }

    void TraSach(){
        DaMuon--;
    }

    string toString() {
        stringstream ss;
        ss<<MaSach<<","<<TenSach<<","<<TheLoai<<","<<TacGia<<","<<NamXuatBan<<" "<<Gia<<" "<<SoLuong<<" "<<DaMuon;
        return ss.str();
    }

    void fromFile(string line) {
        stringstream ss(line);
        getline(ss, MaSach, ',');
        getline(ss, TenSach, ',');
        getline(ss, TheLoai, ',');
        getline(ss, TacGia, ',');
        ss >> NamXuatBan;
        ss >> Gia;
        ss >> SoLuong;
        ss >> DaMuon;
    }

    void print() {
        cout << setw(10) << left << MaSach
             << setw(25) << left << TenSach
             << setw(25) << left << TheLoai
             << setw(20) << left << TacGia
             << setw(10)  << left << NamXuatBan
             << setw(10) << left << Gia
             << setw(6)  << left << SoLuong
             << setw(6)  << left << DaMuon << endl;
    }

    friend istream& operator>>(istream& in, Sach& Sach){
        cin.ignore();
        cout<<"Nhap ten sach: "; getline(in, Sach.TenSach);
        cout<<"Nhap the loai: "; getline(in, Sach.TheLoai);
        cout<<"Nhap ten tac gia: "; getline(in, Sach.TacGia);
        cout<<"Nhap nam xuat ban: "; in>>Sach.NamXuatBan;
        cout<<"Nhap gia sach: "; in>>Sach.Gia;
        cout<<"Nhap so luong them: "; in>>Sach.SoLuong;
    }
};