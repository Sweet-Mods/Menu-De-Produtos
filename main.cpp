//Programa By Sweet Mods

//inclusoes
#include <iostream>
#include <map>

using namespace std;

//casinha de varivaies
int resp;
string resps;
string name;
int code;
int num1,num2;
int result;

//função principal
int main(){
    map<int,string>prod;

    inicio:
    cout << "Bem vindo ao nosso programa de produtos! " << "\n\n";
    cout << "Esse é o nosso menu:\n";
    cout << "1-criar produto\n2-remover produto\n3-ver lista de produtos\n4-calcular\n5-sair\n>";

    cin >> resp;

//Parte Switch (principal para o funcionamento)
    switch (resp){
    case 1:
        system("cls");
        cout << "Digite o nome do Produto: ";
        cin >> name;
        cout << "\nNumero do produto(numeros repitidos podem levar a erros fatais): ";
        cin >> code;
        prod.insert(pair<int,string>(code,name));
        system("cls");
        cout << "Produto adicionado com sucesso!\n";
        goto inicio;
        break;
        
     case 2:
        system("cls");
        for(auto it:prod){
        	cout << it.first << " - " << it.second << "\n\n";
        }
        cout << "Qual Deles Remover?(digite o número): ";
        cin >> resp;
        prod.erase(prod.find(resp));
        system("cls");
        cout << "Removido Com Sucesso!\n";
        goto inicio;
        break;
        
      case 3:
          case3:
          system("cls");
          for(auto it:prod){
          cout << it.first << " - " << it.second << "\n\n";
          }
          	cout << "Digite V para voltar.\n>";
          	cin >> resps;
          	if(resps == "V"){
          		system("cls");
          		goto inicio;
          	}else{
          		system("cls");
          		goto case3;
          	}
          break;
       
       case 4:
             system("cls");
             cout << "Digite o Operador(+,x,-,÷): ";
             cin >> resps;
             if(resps == "+"){
             	cout << "Digite o primeiro valor: ";
             	cin >> num1;
             	cout << "Digite o segundo valor: ";
             	cin >> num2;
             	result = num1 + num2;
             	cout << "Resultado: " << result << "\n\n";
             	cout << "Digite V para voltar.\n>";
             	cin >> resps;
             	if(resps == "V"){
          		system("cls");
          		goto inicio;
          	}else{
          		system("cls");
          		goto case3;
          	}
             }else if(resps == "-"){
             	cout << "Digite o primeiro valor: ";
             	cin >> num1;
             	cout << "Digite o segundo valor: ";
             	cin >> num2;
             	result = num1 - num2;
             	cout << "Resultado: " << result << "\n\n";
             	cout << "Digite V para voltar.\n>";
             	cin >> resps;
             	if(resps == "V"){
          		system("cls");
          		goto inicio;
          	}else{
          		system("cls");
          		goto case3;
          	}
             }else if(resps == "x"){
             	cout << "Digite o primeiro valor: ";
             	cin >> num1;
             	cout << "Digite o segundo valor: ";
             	cin >> num2;
             	result = num1 * num2;
             	cout << "Resultado: " << result << "\n\n";
             	cout << "Digite V para voltar.\n>";
             	cin >> resps;
             	if(resps == "V"){
          		system("cls");
          		goto inicio;
          	}else{
          		system("cls");
          		goto case3;
          	}
             }else if(resps == "÷"){
             	cout << "Digite o primeiro valor: ";
             	cin >> num1;
             	cout << "Digite o segundo valor: ";
             	cin >> num2;
             	result = num1 / num2;
             	cout << "Resultado: " << result << "\n\n";
             	cout << "Digite V para voltar.\n>";
             	cin >> resps;
             	if(resps == "V"){
          		system("cls");
          		goto inicio;
          	}else{
          		system("cls");
          		goto case3;
          	}
             }
             	
    default:
          system("cls");
          goto inicio;
        break;
    }

    return 0;
}
