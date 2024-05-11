#include<bits/stdc++.h>
#include "sach.cpp"
#include "nguoi.cpp"
using namespace std;

class MuonTra{
    string MaMuonTra;
    string MaSach;
    string MSV;
    string MTT;
    string NgayMuon;
    string NgayTra;
    long long TienPhat;
public:
    MuonTra(string ms = "", string msv = "", string mmt = "", string mtt = "", string nm = "", string nt = ""){
        MaSach = ms;
        MSV = msv;
        MTT = mtt;
        MaMuonTra = mmt;
        NgayMuon = nm;
        NgayTra = nt;
        TienPhat = 0;
    }

    string getMaMuonTra() {
        return MaMuonTra;
    }
    
    string getMaSach() {
        return MaSach;
    }

    string getMSV() {
        return MSV;
    }

    string getMTT() {
        return MTT;
    }

    string getMuon() {
        return NgayMuon;
    }

    string getTra() {
        return NgayTra;
    }

    long long getTien() {
        return TienPhat;
    }

    void setMaMuonTra(string mamt) {
        MaMuonTra = mamt;
    }

    void setMaSach(string ms) {
        MaSach = ms;
    }

    void setMSV(string msv) {
        MSV = msv;
    }

    void setMuon(string nm) {
        NgayMuon = nm;
    }

    void setTra(string nt) { 
        NgayTra = nt;
    }

    void setMTT(string mtt) {
        MTT = mtt;
    }

    void fromFile(string line) {
    stringstream ss(line);
    getline(ss, MaMuonTra, ',');
    getline(ss, MaSach, ',');
    getline(ss, MSV, ',');
    getline(ss, MTT, ',');
    getline(ss, NgayMuon, ',');
    getline(ss, NgayTra, ',');
    ss>>TienPhat;
    }

    string toString() {
        stringstream ss;
        ss<<MaMuonTra<<","<<MaSach<<","<<MSV<<","<<MTT<<","<<NgayMuon<<","<<NgayTra<<","<<TienPhat;
        return ss.str();
    }

    void print() {
        cout << setw(6)  << left << MaMuonTra
             << setw(10) << left << MaSach
             << setw(10) << left << MSV
             << setw(6)  << left << MTT
             << setw(30) << left << NgayMuon
             << setw(30) << left << NgayTra
             << setw(10) << left << TienPhat << endl;
    }

    void ThemTien(long long them) {
        TienPhat += them;
    }

    tm stringToTm(string str) {
        istringstream ss(str);
        tm timeStruct = {};
        ss >> get_time(&timeStruct, "%a %b %d %H:%M:%S %Y");
        return timeStruct;
    }

    int daysBetween() {
        tm time1 = stringToTm(NgayMuon);
        tm time2 = stringToTm(NgayTra);

        time_t time1_seconds = mktime(&time1);
        time_t time2_seconds = mktime(&time2);

        double seconds_diff = difftime(time2_seconds, time1_seconds);

        return abs(seconds_diff) / (60 * 60 * 24);
    }

    friend istream& operator>>(istream& in, MuonTra& MuonTra){
    cin.ignore();
    cout<<"Nhap ma sach: "; getline(in, MuonTra.MaSach);
    cout<<"Nhap ma sinh vien: "; getline(in, MuonTra.MSV);
    cout<<"Nhap ma thu thu: "; getline(in, MuonTra.MTT);
    }

};