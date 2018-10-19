//Matthew O'Connell
using namespace std;
template<class T1>
T1 findmax(T1 a, T1 b,  T1 c, T1 d, T1 e){
	T1 vars[] = {a,b,c,d,e}; T1 largest = a;
	for(int i = 0; i < (sizeof(vars)/sizeof(vars[0])); i++){ //loops through array, sizeof... gets length of array
		if(vars[i] > largest){
			largest = vars[i];
		}
	}
	return largest;
}