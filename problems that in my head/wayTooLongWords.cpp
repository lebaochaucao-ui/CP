#include <bits/stdc++.h>

using namespace std;

void idc(){
    string s;
    int idk;
    cout << "nhap cai tu dai nhu truyen thuyet tung ke di \n";
    cin >> s;
    if(s.size() > 10){
        idk = s.length() - 2;
        cout << "da rut ngan nhu con chim cua m :" << s[0] << idk << s.back() << endl;

    }
    else{
        cout << "chu ngan qua ban oi \n";
    }
    return ;

}

int main(){
    int n;
    cout << "nhap so luong tu ban muon rut ngan : \n";
    cin >> n;
    while(n--){
        idc();
    }

}
