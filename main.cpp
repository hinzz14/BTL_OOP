#include<bits/stdc++.h>
#include "menu.cpp"
using namespace std;

int main() {
    int chon;
    do {
        cout<<R"(
   ____                   __          ________          _   ___        
  / __ \__ __________    / /  __ __  /_  __/ /  __ __  | | / (_)______ 
 / /_/ / // / _ `/ _ \  / /__/ // /   / / / _ \/ // /  | |/ / / -_) _ \
 \___\_\_,_/\_,_/_//_/ /____/\_, /   /_/ /_//_/\_,_/   |___/_/\__/_//_/
                            /___/                                    
)";
        cout << "1. Nhap them mot cuon sach" << endl;
        cout << "2. Sua thong tin sach" << endl;
        cout << "3. Xoa mot cuon sach" << endl;
        cout << "4. Nhap thong tin sinh vien" << endl;
        cout << "5. Sua thong tin sinh vien" << endl;
        cout << "6. Xoa thong tin sinh vien" << endl;
        cout << "7. Them thong tin thu thu" << endl;
        cout << "8. Sua thong tin thu thu" << endl;
        cout << "9. Xoa thong tin thu thu" << endl;
        cout << "10. Muon Sach" << endl;
        cout << "11. Tra Sach" << endl;
        cout << "12. Liet ke toan bo sach trong thu vien" << endl;
        cout << "13. Liet ke toan bo sinh vien" << endl;
        cout << "14. Liet ke toan bo thu thu" << endl;
        cout << "15. Liet ke sach duoc muon boi 1 sinh vien" << endl;
        cout << "16. Liet ke toan bo sach duoc muon" << endl;
        cout << "17. Thoat khoi he thong" << endl;
        cout << "=> Moi chon chuc nang: ";
        cin >> chon;
        cout << "========================================" << endl;
        switch(chon) {
            case 1:
                ThemSach();
                break;
            case 2:
                SuaSach();
                break;
            case 3:
                XoaSach();
                break;
            case 4:
                ThemSinhVien();
                break;
            case 5:
                SuaSinhVien();
                break;
            case 6:
                XoaSinhVien();
                break;
            case 7:
                ThemThuThu();
                break;
            case 8:
                SuaThuThu();
                break;
            case 9:
                XoaThuThu();
                break;
            case 10:
                MuonSach();
                break;
            case 11:
                TraSach();
                break;
            case 12:
                ToanBoSach();
                break;
            case 13:
                ToanBoSinhVien();
                break;
            case 14:
                ToanBoThuThu();
                break;
            case 15:
                SachMotSinhVienMuon();
                break;
            case 16:
                ToanBoSachDuocMuon();
                break;
            case 17:
                cout << endl;
                cout << "\t\tXin chao va hen gap lai!" << endl;
                cout << endl;
                break;
        }
        if(chon != 17) {
            cout << endl;
            cout << "========================================"<<endl;
            cout << "=> Nhan Enter de tro ve !";
            cin.get();
            cin.ignore();
            system("cls");
        }
    }
    while(chon != 17);
	return 0;
}