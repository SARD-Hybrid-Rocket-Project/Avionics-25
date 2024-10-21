#include <iostream>
#include <wiringPi.h> //Raspberry Pi用のGPIOインタフェースライブラリ
#include <string>

using namespace std;

// LED ピン - wiringPi ピン 0 は BCM_GPIO 17 です。
// wiringPiSetupSys で初期化する場合は、BCM 番号付けを使用する必要があります
// 別のピン番号を選択する場合は、BCM 番号付けを使用してください。また
// プロパティ ページで、[ビルド イベント]、[リモートのビルド後イベント] の順に選択し、 コマンドを更新してください
// これは、wiringPiSetupSys のセットアップに対して GPIO エクスポートを使用します
#define	LED	17

int main(void)
{
	cout << "Kudryavkaを起動しています…" << endl;

	wiringPiSetupSys();

	cout << "Welcome" << endl;
	string str;
	while (true)
	{
		cout << ">>>";
		cin >> str;
		if (str == "exit") break;
	}

	return 0;
}