#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string MNV;
	string Ten;
	string Gioitinh;
public:
	//Cau tu
	NhanVien(): MNV(""), Ten(""), Gioitinh("")
	{}
	NhanVien(string a, string b, string c): MNV(a), Ten(b), Gioitinh(c)
	{}
	//Setters
	void setMNV(string a)
	{
		this->MNV = a;
	}
	void setTen(string b)
	{
		this->Ten = b;
	}
	void setGT(string c)
	{
		this->Gioitinh = c;
	}
	//Getters
	string getMNV() const
	{
		return this->MNV;
	}
	string getTen() const
	{
		return this->Ten;
	}
	string getGT() const
	{
		return this->Gioitinh;
	}
	//Phuong thuc
	void NhapDL()
	{
		cout<<"Nhap MNV: ";
		cin>>this->MNV;
		cout<<"Nhap Ten: ";
		cin>>this->Ten;
		cout<<"Nhap Gioi Tinh: ";
		cin>>this->Gioitinh;		
	}
	void XuatDL()
	{
		cout<<"Ma NV: "<<getMNV()<<endl;
		cout<<"Ten NV: "<<getTen()<<endl;
		cout<<"Gioi Tinh: "<<getGT()<<endl;
	}
	virtual float TinhLuong() = 0;
};

class CanBoHanhChinh: public NhanVien
{
protected:
	int HsLuong;
	float SoNamCT;

public:
	CanBoHanhChinh(): NhanVien(), HsLuong(), SoNamCT()
	{}
	CanBoHanhChinh(string a, string b, string c, int d, float e ):
	NhanVien(a,b,c),HsLuong(d),SoNamCT(e)
	{}
	virtual float TinhLuong();
	//Setters
	void setHSL(int a)
	{
		this->HsLuong = a;
	}
	void setSoNam(float b)
	{
		this->SoNamCT = b;
	}
	//Getters
	int getHSL() const
	{
		return this->HsLuong;
	}
	float getSoNam() const
	{
		return this->SoNamCT;
	}
	//Phuong thuc
	
	//
	void NhapDL()
	{
		cout<<"Nhap MNV: ";
		cin>>this->MNV;
		cout<<"Nhap Ten: ";
		cin>>this->Ten;
		cout<<"Nhap Gioi Tinh: ";
		cin>>this->Gioitinh;
		cout<<"Nhap He So Luong: ";
		cin>>this->HsLuong;	
		cout<<"Nhap So Nam LV: ";
		cin>>this->SoNamCT;

	}
	void XuatDL()
	{
		cout<<"Ma NV: "<<getMNV()<<endl;
		cout<<"Ten NV: "<<getTen()<<endl;
		cout<<"Gioi Tinh: "<<getGT()<<endl;
		cout<<"HsLuong: "<<getHSL()<<endl;
		cout<<"So Nam Lv: "<<getSoNam()<<endl;
	}
};
float CanBoHanhChinh::TinhLuong()
	{
		cout<<"Luong: ";
		cout<<((getHSL()*1500000)+(getSoNam()*300000));
	}

int main()
{
	CanBoHanhChinh a("A30881","Anh","Nam",1,1);
	a.XuatDL();
	cout<<a.TinhLuong()<<endl;
	return 0;
}