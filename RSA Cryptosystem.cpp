#include <iostream>

using namespace std;

int power(int val, int pow){
	if(pow!=0){
		return (val * power(val, pow - 1));
	}
	
	return 1;
}



int main(){
	
	int M = 4;	//Message
	int p = 3;
	int q = 11;
	int n = p*q;
	cout << "n = " << n << endl;
	
	int Piofn = (p-1)*(q-1);
	cout << "Pi(n) = " << Piofn << endl;

	
	int e = 7; 	// used for public key
	int k = 1;
	
	int d = (1 + k*Piofn)/e;		// used for private key
	cout << "d = " << d << endl;
	
	int P[] = {e, n};	// Public key
	cout << "The Public Key, P is: ";
	for(int i = 0; i<=1; i++){
		cout << P[i] << ", ";
	}
	
	cout << endl;
	
	int S[] = {d, n};	// Private key
	cout << "The Private Key, S is: ";
	for(int i = 0; i<=1; i++){
		cout << S[i] << ", ";
	}
	
	cout << endl;
	
	
	// Encrypting the message M
	int Mdash = (power(M, e)) % n;
	
	cout << "Encrypted Message is: " << Mdash << endl;

	return 0;
}



