#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouro");
	cartas.push("Rei de Paus");//primeiro elemento da pilha/elemento do topo por ter sido o último a ser inserido
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cartas.pop ();
	cartas.pop ();
	cartas.pop ();
	cartas.pop ();
	
	while(!cartas.empty()){
	cartas.push("Rei de Paus");
	cartas.push("Rei de Ouro");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Copas");
	}
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Carta do topo: " << cartas.top() << "\n";
	
	return 0;
	
}
