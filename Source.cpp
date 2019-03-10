#include<iostream>
#include<string>
#include<math.h>

using namespace std;
class So{
private:
	string number;
	int coSo;
public:
	So DoiCoSo(int n){
		string result;
		int s = 0;
		int i;
		for (i = number.length() - 1; i >= 0; i--){
			int k;
			if (number[i] >= 65){
				k = number[i] - 65 + 10;
			}
			else{
				k = number[i] - 48;
			}
			s += k * pow(coSo, number.length() - i - 1);
		}
		while (s != 0){
			int k = s%n;
			if (k >= 10){
				k = k - 10 + 65;
			}
			else{
				k = k + 48;
			}
			result.append(1,k);
			s /= n;
		}
		string str;
		for (int j = 0; j < result.length();){
			str.push_back(result.back());
			result.pop_back();
		}
		So kq;
		kq.setCoSo(10);
		kq.setNumber(str);
		return kq;
	}
	void setCoSo(int n){
		coSo = n;
	}
	void setNumber(string str){
		number = str;
	}
	void Xuat(){
		cout << number;
	}
};
void main(){
	string str;
	int n;
	So a, b;
	cout << "nhap so: ";
	getline(cin, str);
	fflush(stdin);
	cout << "nhap co so: ";
	cin >> n;
	a.setCoSo(n);
	a.setNumber(str);
	cout << "ban muon doi sang co so: ";
	cin >> n;
	b = a.DoiCoSo(n);
	cout << "so sau khi doi: ";
	b.Xuat();
	cout << endl;
}