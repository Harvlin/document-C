#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

struct Acara {
	int start;
	int end;
};

bool bandingkan(Acara a, Acara b) {
	return a.end < b.end;
}

int maxAcaras(vector<Acara> &Daf_Acara) {
	sort (Daf_Acara.begin(), Daf_Acara.end(), [](Acara a, Acara b) {
		return a.end < b.end;
	})
	
	int banyaknya = 0;
	int AcaraTerakhir = 0;
	
	for (const auto &Acara : Daf_Acara) {
		if (Acara.start >= AcaraTerakhir) {
			banyaknya++;
			AcaraTerakhir = Acara.end;
		}
	}
	
	return banyaknya;
}

int main() {
	
	return 0;
}