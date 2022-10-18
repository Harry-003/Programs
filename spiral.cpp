#include <iostream>
using namespace std;

int main(){
	int row, col;
	cout << "Enter no of rows and cols:" << endl;
	cin >> row >> col;
	
	int spiral[row][col];
	
	for(int i=0; i<row; i++){
		cout << "Enter elements for row " << i+1 << endl;
		for(int j=0; j<col;j++){
			cin>>spiral[i][j];
		}
	}
	
	cout << endl;
	int fr=0, lc=col-1, lr=row-1, fc=0;
	
	while(fr<=lr && fc<=lc){
		for(int i=fc; i<=lc; i++) cout<<spiral[fr][i] << " ";
		fr++;
		for(int i=fr; i<=lr; i++) cout<<spiral[i][lc] << " ";
		lc--;
		for(int i=lc; i>=fc; i--) cout<<spiral[lr][i] << " ";
		lr--;
		for(int i=lr; i>=fr; i--) cout<<spiral[i][fc] << " ";
        fc++;
	}
	
}