#include<iostream>
#include<vector>
using namespace std;
int solution(int N) {
int i = 0;
		vector<int> aux;
		while(N!=0){
			if((N & 1) == 1)
				aux.push_back(i);
			i++;
			N = N>>1;
		}
		if(aux.size()==1)
			return 0;
		int m = -1;
		for(int x=1;x<aux.size();x++){
			m = max(m,(aux[x]-aux[x-1]));
    }
		return m;
}

int main(){
    int N =15;
    cout<<solution(N)<<endl;
    return 0;
}