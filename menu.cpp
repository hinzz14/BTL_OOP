#include<bits/stdc++.h>
#include "muontra.cpp"
using namespace std;

void ThemSinhVien() {
    SinhVien moi;
    moi.nhap();
    ofstream nhap("sinhvien_temp.txt");
    ifstream dulieu("sinhvien.txt");
    string line;
    bool exist = false;
    while(getline(dulieu, line)){
        SinhVien data; data.fromFile(line);
        if(data.getMSV() == moi.getMSV()) {
            cout<<"Da co sinh vien trong du lieu"<<endl;
            int opt;
            cout<<"1.Sua thong tin cu\t2.Xoa thong tin moi\nChon: ";
            cin>>opt;
            if(opt == 1) continue;
            if(opt == 2) exist = true;
        }
        nhap<<data.toString()<<endl;
    }
    if(!exist) nhap<<moi.toString()<<endl;
    nhap.close();
    dulieu.close();
    remove("sinhvien.txt");
    rename("sinhvien_temp.txt", "sinhvien.txt");
    cout<<"Them sinh vien thanh cong";
}

void XoaSinhVien() {
    cin.ignore();
    string msv;
    cout<<"Nhap ma sinh vien can xoa: "; getline(cin, msv);
    ofstream nhap("sinhvien_temp.txt");
    ifstream dulieu("sinhvien.txt");
    ifstream dulieu1("muontra.txt");
    string line;
    bool exist = false, dangmuon = false;
    while(getline(dulieu1, line)){
        MuonTra data; data.fromFile(line);
        if(data.getMSV() == msv && data.getTra()=="") {dangmuon = true; break;}
    }
    while(getline(dulieu, line)){
        SinhVien data; data.fromFile(line);
        if(data.getMSV() == msv) {
            exist = true;
            if(!dangmuon) continue;
        }
        nhap<<data.toString()<<endl;
    }
    dulieu.close();
    dulieu1.close();
    nhap.close();
    remove("sinhvien.txt");
    rename("sinhvien_temp.txt", "sinhvien.txt");
    if(dangmuon) cout<<"Sinh vien dang muon sach, khong the xoa";
    else if(exist) cout<<"Xoa sinh vien thanh cong";
    else cout<<"Khong co ma sinh vien "<<msv;
}

void SuaSinhVien() {
    cin.ignore();
    string msv;
    cout<<"Nhap ma sinh vien can sua: "; getline(cin, msv);
    ofstream nhap("sinhvien_temp.txt");
    ifstream dulieu("sinhvien.txt");
    string line;
    int k=0,t=0;
    while(getline(dulieu, line)){
        k++;
        SinhVien data; data.fromFile(line);
        if(data.getMSV() == msv) {
            string tenmoi, nganhmoi;
            cout<<"Nhap ten sinh vien moi: "; getline(cin, tenmoi); data.setHoTen(tenmoi);
            cout<<"Nhap nganh hoc moi: "; getline(cin, nganhmoi); data.setNganhHoc(nganhmoi);
        }
        else{t++;}
        nhap<<data.toString()<<endl;
    }
    dulieu.close();
    nhap.close();
    remove("sinhvien.txt");
    rename("sinhvien_temp.txt", "sinhvien.txt");
    if(k==t) cout<<"Ma sinh vien khong ton tai!!!";
    else cout<<"Sua sinh vien thanh cong";
}

void ToanBoSinhVien() {
    cout<< setw(10) << left << "MSV"
        << setw(30) << left << "Ho Ten"
        << setw(10) << left << "Nganh hoc" << endl;
    ifstream dulieu("sinhvien.txt");
    string line;
    while(getline(dulieu, line)){
        SinhVien data; data.fromFile(line);
        data.print();
    }
    dulieu.close();
}

void ThemThuThu() {
    ThuThu moi;
    moi.nhap();
    ofstream nhap("thuthu_temp.txt");
    ifstream dulieu("thuthu.txt");
    string line;
    bool exist = false;
    while(getline(dulieu, line)){
        ThuThu data; data.fromFile(line);
        if(data.getMTT() == moi.getMTT()) {
            cout<<"Da co thu thu trong du lieu"<<endl;
            int opt;
            cout<<"1.Sua thong tin cu\t2.Xoa thong tin moi\nChon: ";
            cin>>opt;
            if(opt == 1) continue;
            if(opt == 2) exist = true;
        }
        nhap<<data.toString()<<endl;
    }
    if(!exist) nhap<<moi.toString()<<endl;
    nhap.close();
    dulieu.close();
    remove("thuthu.txt");
    rename("thuthu_temp.txt", "thuthu.txt");
    cout<<"Them thu thu thanh cong";
}

void XoaThuThu() {
    cin.ignore();
    string mtt;
    cout<<"Nhap ma thu thu can xoa: "; getline(cin, mtt);
    ofstream nhap("thuthu_temp.txt");
    ifstream dulieu("thuthu.txt");
    ifstream dulieu1("muontra.txt");
    string line;
    bool exist = false, dangmuon = false;
    while(getline(dulieu1, line)){
        MuonTra data; data.fromFile(line);
        if(data.getMTT() == mtt && data.getTra()=="") {dangmuon = true; break;}
    }
    while(getline(dulieu, line)){
        ThuThu data; data.fromFile(line);
        if(data.getMTT() == mtt) {
            exist = true;
            if(!dangmuon) continue;
        }
        nhap<<data.toString()<<endl;
    }
    dulieu.close();
    dulieu1.close();
    nhap.close();
    remove("thuthu.txt");
    rename("thuthu_temp.txt", "thuthu.txt");
    if(dangmuon) cout<<"Thu thu dang phu trach viec muon sach, khong the xoa";
    else if(exist) cout<<"Xoa thu thu thanh cong";
    else cout<<"Khong co ma thu thu "<<mtt;
}

void SuaThuThu() {
    cin.ignore();
    string mTT;
    cout<<"Nhap ma thu thu can sua: "; getline(cin, mTT);
    ofstream nhap("thuthu_temp.txt");
    ifstream dulieu("thuthu.txt");
    string line;
    int k=0,t=0;
    while(getline(dulieu, line)){
        k++;
        ThuThu data; data.fromFile(line);
        if(data.getMTT() == mTT) {
            string tenmoi;
            cout<<"Nhap ten thu thu moi: "; getline(cin, tenmoi); data.setHoTen(tenmoi);
        }
        else{t++;}
        nhap<<data.toString()<<endl;
    }
    dulieu.close();
    nhap.close();
    remove("thuthu.txt");
    rename("thuthu_temp.txt", "thuthu.txt");
    if(k==t) cout <<"Ma thu thu khong ton tai!!!";
    else cout<<"Sua thu thu thanh cong";
}

void ToanBoThuThu() {
    cout<< setw(10) << left << "MTT"
        << setw(30) << left << "Ho Ten" << endl;
    ifstream dulieu("thuthu.txt");
    string line;
    while(getline(dulieu, line)){
        ThuThu data; data.fromFile(line);
        data.print();
    }
    dulieu.close();
}

void MuonSach() {
    MuonTra muon;
    cin>>muon;
    time_t now = time(0);
    string nm = ctime(&now);
    muon.setMuon(nm.erase(nm.size() - 1));
    ofstream nhap("muontra_temp.txt");
    ofstream update("sach_temp.txt");
    ifstream dulieu("sach.txt");
    ifstream dulieu1("muontra.txt");
    ifstream dulieu2("sinhvien.txt");
    ifstream dulieu3("thuthu.txt");
    string line;
    bool sach = false, sinhvien = false, thuthu = false;
    while(getline(dulieu2, line)){
        SinhVien data; data.fromFile(line);
        if(data.getMSV() == muon.getMSV()) {sinhvien = true; break;}
    }
    while(getline(dulieu3, line)){
        ThuThu data; data.fromFile(line);
        if(data.getMTT() == muon.getMTT()) {thuthu = true; break;}
    }
    while(getline(dulieu, line)){
        Sach data; data.fromFile(line);
        if(data.getSoLuong() > data.getDaMuon() && data.getMaSach() == muon.getMaSach() && thuthu && sinhvien) {data.MuonSach(); sach = true;}
        update<<data.toString()<<endl;
    }
    map<string, int> check;
    while(getline(dulieu1, line)){
        MuonTra data; data.fromFile(line);
        check[data.getMaMuonTra()] = 1;
        nhap<<data.toString()<<endl;
    }
    if (!thuthu || !sinhvien) {cout<<"Khong ton tai ma thu thu hoac ma sinh vien"<<endl;}
    else if(!sach) {cout<<"Khong con sach hoac sai ma sach cho muon"<<endl;}
    else{
        int mmt = rand() % 1000;
        while(check[to_string(mmt)]){
            mmt = rand() % 1000;
        }
        muon.setMaMuonTra(to_string(mmt));
        nhap<<muon.toString()<<endl;
        cout<<"Muon sach thanh cong";
    }
    dulieu1.close();
    dulieu2.close();
    dulieu3.close();
    update.close();
    dulieu.close();
    nhap.close();
    remove("sach.txt");
    remove("muontra.txt");
    rename("sach_temp.txt", "sach.txt");
    rename("muontra_temp.txt", "muontra.txt");
}

void TraSach() {
    MuonTra tra;
    int mmt;
    cout<<"Nhap ma muon tra: "; cin>>mmt; tra.setMaMuonTra(to_string(mmt)); 
    time_t now = time(0);
    string nt = ctime(&now);
    tra.setTra(nt.erase(nt.size() - 1));
    ofstream nhap("muontra_temp.txt");
    ifstream dulieu1("muontra.txt");
    ofstream update("sach_temp.txt");
    ifstream dulieu("sach.txt");
    string line;
    bool exist = false, datra = false;
    while(getline(dulieu1, line)){
        MuonTra data1; data1.fromFile(line);
        if(data1.getMaMuonTra() == tra.getMaMuonTra()) {
			exist = true;
			tra.setMuon(data1.getMuon());
			tra.setMaSach(data1.getMaSach());
			tra.setMSV(data1.getMSV());
			tra.setMTT(data1.getMTT());
		}
        else nhap<<data1.toString()<<endl;
    }
    if(!exist){
        cout<<"Sai ma muon tra";
        remove("sach_temp.txt");
        remove("muontra_temp.txt");
        return ;
    }
    bool masach = false;
    while(getline(dulieu, line)){
        Sach data; data.fromFile(line);
        if(data.getMaSach() == tra.getMaSach()) {
            data.TraSach(); masach = true; 
            long long them = 0;
            int tinhTrang = 1;
            while(tinhTrang){
                system("cls");
                cout << "0. Thoat" << endl;
                cout << "1. Mat sach hoac hu hong nang" << endl;
                cout << "2. Mat trang" << endl;
                cout << "3. Lam ban trang" << endl;
                cout << "4. Lam hu bia" << endl;
                cout << "5. Lam rach, uot, boc nhan tai lieu" << endl;
                cout<<"Nhap tinh trang: ";
                cin >> tinhTrang;
                if(tinhTrang == 1) {them = data.getGia()*2; break;}
                if(tinhTrang == 2) {
                    int sotrang;
                    cout<<"Nhap so trang: "; cin>>sotrang;
                    them += (sotrang*10000);
                }
                if(tinhTrang == 3) {
                    int sotrang;
                    cout<<"Nhap so trang: "; cin>>sotrang;
                    them += (sotrang*3000);
                }
                if(tinhTrang == 4) them += 15000;
                if(tinhTrang == 5) them += 80000;
            }
            int songaymuon = tra.daysBetween();
            if(songaymuon > 90) them+= ((songaymuon - 90)*5000);
            if(them) cout<<"Sinh vien lam hong sach hoac tra qua han, bi phat "<<them<<" dong"<<endl;
            tra.ThemTien(them);
            }
        update<<data.toString()<<endl;
    }
    if(masach){
        nhap<<tra.toString()<<endl;
        cout<<"Tra sach thanh cong";
    }
    else{
        cout<<"Sai ma sach: "<<tra.getMaSach();
    }
    dulieu1.close();
    update.close();
    dulieu.close();
    nhap.close();
    remove("sach.txt");
    remove("muontra.txt");
    rename("sach_temp.txt", "sach.txt");
    rename("muontra_temp.txt", "muontra.txt");
}

void SachMotSinhVienMuon() {
    ifstream dulieu("muontra.txt");
    ifstream dulieu1("sinhvien.txt");
    string msv, line;
    bool exist = false;
    cin.ignore();
    cout<<"Nhap ma sinh vien: "; getline(cin, msv);
    while(getline(dulieu1, line)){
        SinhVien data; data.fromFile(line);
        if(data.getMSV()==msv) {exist = true; break;}
    }
    if(exist) cout << setw(6)  << left << "MaMT"
         << setw(10) << left << "Ma Sach"
         << setw(10) << left << "MSV"
         << setw(6) << left << "MTT"
         << setw(30) << left << "Ngay Muon"
         << setw(30) << left << "Ngay Tra" 
         << setw(10) << left << "Tien phat" << endl;
    else cout<<"Khong ton tai ma sinh vien ";
    while(getline(dulieu, line)){
        MuonTra data; data.fromFile(line);
        if(data.getMSV()==msv) data.print();
    }
    dulieu.close();
}

void ToanBoSachDuocMuon() {
    ifstream dulieu("muontra.txt");
    cout << setw(6)  << left << "MaMT"
         << setw(10) << left << "Ma Sach"
         << setw(10) << left << "MSV"
         << setw(6) << left << "MTT"
         << setw(30) << left << "Ngay Muon"
         << setw(30) << left << "Ngay Tra" 
         << setw(10) << left << "Tien phat" << endl;
    string line;
    while(getline(dulieu, line)){
        MuonTra data; data.fromFile(line);
        data.print();
    }
    dulieu.close();
}

void ThemSach() {;
    Sach moi;
    cin>>moi;
    ofstream nhap("sach_temp.txt");
    ifstream dulieu("sach.txt");
    string line;
    map<string, int> check;
    bool noexist = true;
    while(getline(dulieu, line)){
        Sach data; data.fromFile(line);
        if(data.getMaSach() == moi.getMaSach()) {data.setSoLuong(data.getSoLuong()+moi.getSoLuong()); noexist = false;}
        if(data.getSoLuong()<=0) continue;
        check[data.getMaSach()] = 1;
        nhap<<data.toString()<<endl;
    }
    int ms = rand() % 1000;
    while(check[to_string(ms)]){
        ms = rand() % 1000;
    }
    moi.setMaSach(to_string(ms));
    if(noexist) nhap<<moi.toString()<<endl;
    dulieu.close();
    nhap.close();
    remove("sach.txt");
    rename("sach_temp.txt", "sach.txt");
    cout<<"Them sach thanh cong";
}

void SuaSach() {
    cin.ignore();
    string ms;
    cout<<"Nhap ma sach can sua: "; getline(cin, ms);
    ofstream nhap("sach_temp.txt");
    ifstream dulieu("sach.txt");
    string line;
    int k=0,t=0;
    while(getline(dulieu, line)){
        k++;
        Sach data; data.fromFile(line);
        if(data.getMaSach() == ms) {
            string tenmoi, loaimoi, tgmoi;
            int nxbmoi, slmoi, giamoi;
            cout<<"Nhap ten sach moi: "; getline(cin, tenmoi); data.setTenSach(tenmoi);
            cout<<"Nhap the loai moi: "; getline(cin, loaimoi); data.setTheLoai(loaimoi);
            cout<<"Nhap ten tac gia moi: "; getline(cin, tgmoi); data.setTacGia(tgmoi);
            cout<<"Nhap nam xuat ban moi: "; cin>>nxbmoi; data.setNamXuatBan(nxbmoi);
            cout<<"Nhap gia sach moi: "; cin>>giamoi; data.setGia(giamoi);
            cout<<"Nhap so luong moi: "; cin>>slmoi; data.setSoLuong(slmoi);
        }
        else{t++;}
        nhap<<data.toString()<<endl;
    }
    dulieu.close();
    nhap.close();
    remove("sach.txt");
    rename("sach_temp.txt", "sach.txt");
    if(k==t) cout <<"Ma sach khong ton tai!!!";
    else cout<<"Sua sach thanh cong";
}

void XoaSach() {
    cin.ignore();
    string ms;
    cout<<"Nhap ma sach can xoa: "; getline(cin, ms);
    ofstream nhap("sach_temp.txt");
    ifstream dulieu("sach.txt");
    string line;
    bool exist = false, dangmuon = false;
    while(getline(dulieu, line)){
        Sach data; data.fromFile(line);
        if(data.getMaSach() == ms) {
        	exist = true;
        	if(data.getDaMuon()) dangmuon = true;
        	else continue;
		}
		nhap<<data.toString()<<endl;
    }
    dulieu.close();
    nhap.close();
    remove("sach.txt");
    rename("sach_temp.txt", "sach.txt");
    if(!exist) cout << "Khong co ma sach!";
    else {
    	if(dangmuon) cout <<"Sach dang duoc muon, khong the xoa!";
    	else cout <<"Xoa sach thanh cong!";
	}
}

void ToanBoSach() {
    cout<< setw(10) << left << "MaSach"
        << setw(25) << left << "TenSach"
        << setw(25) << left << "TheLoai"
        << setw(20) << left << "TacGia"
        << setw(10)  << left << "NamXB"
        << setw(10) << left << "Gia"
        << setw(6)  << left << "SL"
        << setw(6)  << left << "Muon" << endl;
    ifstream dulieu("sach.txt");
    string line;
    while(getline(dulieu, line)){
        Sach data; data.fromFile(line);
        data.print();
    }
    dulieu.close();
}