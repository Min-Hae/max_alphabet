#include<iostream>
#include<string>
using namespace std;


int main(){
	string n;
	int arr[91]={0, };
	int max=0;
	int store=0;
	int count =0;
	cin >> n;
	for(int i=0;i<n.length(); i++){
		int ch = n.at(i);
		if(ch>=97)
			arr[ch -32]++;
		else
			arr[ch]++;
	}

	for(int i=65;i<=90;i++){
		if(max < arr[i]){
			max = arr[i];
			store = i;
		}
	}
	for(int i=65;i<=90;i++){
		if(max == arr[i]){
			count++;

		if(count >=2){
			cout <<"?" << endl; //만약 max 갯수가 동일하면 ? 출력
			return 0;
		}
	}
	}
	cout <<(char)store << endl;
	return 0;
}
