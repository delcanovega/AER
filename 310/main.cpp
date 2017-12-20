#include <vector>
#include <stdio.h>
using namespace std;

struct Arb {
	vector<Arb> hs;
	int nHijos;

	Arb(){
		nHijos = 0;
	}

	void addSon(const Arb hijo){
		hs.push_back(hijo);
		nHijos++;
	}
};

int pre(int max, int prof, const Arb &a){

	if (a.nHijos != 0) {
		for (int i=0; i<a.nHijos; i++){
			int out;
			out = pre(max, prof+1, a.hs.at(i));
			if (out > max)
				max = out;
		}
	}

	if (prof > max)
		max = prof;

	return max;
}

Arb procesa(int &max, int prof, int hijos) {
	Arb a = Arb();
	if (hijos != 0){
		Arb h;
		int nietos;
		for (int i=0; i<hijos; i++){
			scanf("%d",&nietos);
			h = procesa(max, prof+1, nietos);
			a.addSon(h);
		}
	}
	if(prof > max)
		max = prof;

	return a;
}

int main() {
	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		Arb a;
		int hijos;
		scanf("%d",&hijos);
		int max = 1;
		a = procesa(max, 1, hijos);
		//printf("%d\n", pre(1,1,a));
		printf("%d\n", max);
	}
	return 0;
}

