#include <iostream>
#include <cassert>
#include <iomanip>
#include <cctype>
#include <cstdlib> // Para utilizar system("cls")

using namespace std;

/*Linhas onde está cada coisa:
-Ponteiro: 559 e 608
-Aritmetica de ponteiros: 345
-struct: 18 a 55
-Ordenação: 525
-Busca: mostrar e percorrer(sequencial)
-Recursão: 525
-memoria alocada: 559 e 608
- Teste: 657*/

typedef struct{
    int dia;
    int mes;
    int ano;
}datas;

typedef struct{
    string nome;
    datas aniversario;
    datas entrada;
    string alergias;
}cria_campist;

typedef struct{
    string chale;
    int premios;
    cria_campist acampados[20];
}cria_chales;

typedef struct{
    string chale;
    int premios;
}rankiado;

typedef struct
{
    int h;
    int min;
}horas;

typedef struct
{
    horas inicio;
    horas termimino;
    string semana;
    string atividade;
    string chale;
} cronogramas;


void inicializacao(cria_chales chales[], rankiado rank[], cronogramas cronograma[]);

void inicio (cria_chales chales[], rankiado rank[], cronogramas cronograma[]);

void listas(cria_chales chale[], rankiado rank[], cronogramas cronograma[]);

void chales_menu(cria_chales chale[], rankiado rank[], cronogramas cronograma[]);

void mostrar_chales(cria_chales chale[]);

void mostrar_campistas(cria_chales chale[]);

int percorrer(int n, cria_chales chale[]);

void adicionar_camp(cria_chales chale[], rankiado rank[], cronogramas cronograma[]);

void editar_camp(cria_chales chales[], rankiado rank[], cronogramas cronograma[]);

void excluir_camp(cria_chales chales[], rankiado rank[], cronogramas cronograma[]);

void troca(rankiado rank[], int j); 

void bubble_r (rankiado rank[], int n);

void M_crono(cronogramas cronograma[], cria_chales chales[], rankiado rank[]);

void teste_bubble();

int main() {
    system("cls"); // Limpa o terminal

    teste_bubble();

    cout << endl << "Aperte qualquer tecla para iniciar: ";
    cin.ignore();

    system("cls");

    cria_chales chales[14];

    rankiado rankiar[14]; 

    cronogramas cronograma[100];

    inicializacao(chales, rankiar, cronograma);

    inicio(chales, rankiar, cronograma);  

    return 0;
}

void inicializacao(cria_chales chales[], rankiado rank[], cronogramas cronograma[]){
    chales[0].chale = "entrada";
    chales[1].chale = "Zeus/1";
    chales[2].chale = "Hera/2";
    chales[3].chale = "Poseidon/3";
    chales[4].chale = "Demeter/4";
    chales[5].chale = "Ares/5";
    chales[6].chale = "Atena/6";
    chales[7].chale = "Apolo/7";
    chales[8].chale = "Artemis/8";
    chales[9].chale = "Hefesto/9";
    chales[10].chale = "Afrodite/10";
    chales[11].chale = "Hermes/11";
    chales[12].chale = "Dionisio/12";
    chales[13].chale = "Hades/13";
 
    chales[1].premios = 3;
    chales[2].premios = 10;
    chales[3].premios = 6;
    chales[4].premios = 5;
    chales[5].premios = 9;
    chales[6].premios = 11; 
    chales[7].premios = 4; 
    chales[8].premios = 6; 
    chales[9].premios = 0; 
    chales[10].premios = 1;
    chales[11].premios = 8;
    chales[12].premios = 2;
    chales[13].premios = 7;


    chales[1].acampados[0] = {"Angelo", 22, 12, 2013, 28, 02, 2024, "Amoxilina, polen" };
    chales[1].acampados[1] = {"Perseu", 16, 8, 2015, 03, 03, 2022, "poeira"  };
    chales[1].acampados[2] = {"Helen", 17, 12, 2018, 12, 02, 2021, "tintura, polen"  };
    chales[2].acampados[0] = {"Eris", 21, 01, 2010, 29, 05, 2020, "corante"  };
    chales[2].acampados[1] = {"Hebe", 19, 03, 2013, 23, 04, 2019, "zinco"  };
    chales[2].acampados[2] = {"Ilitia", 17, 02, 2015, 15, 02, 2018, "lactose"  };
    chales[3].acampados[0] = {"Teseu", 15, 07, 2014, 17, 07, 2010, "pelo de gato"  };
    chales[3].acampados[1] = {"Agenor", 14, 05, 2011, 13, 12, 2021, "pelo de cachorro"  };
    chales[3].acampados[2] = {"Orion", 12, 9, 2017, 04, 8, 2022, "poeira"  };
    chales[4].acampados[0] = {"Lasiao", 28, 12, 2017, 07, 9, 2023, "polen"  };
    chales[4].acampados[1] = {"Arion", 30, 10, 2016, 8, 01, 2024, "abobrinha"  };
    chales[4].acampados[2] = {"Persefone", 31, 11, 2010, 18, 11, 2019, "poeira"  };
    chales[5].acampados[0] = {"Clarisse", 14, 8, 2012, 16, 10, 2017, "fungo"  };
    chales[5].acampados[1] = {"Ellis", 18, 9, 2011, 19, 05, 2020, "Amoxilina"  };
    chales[5].acampados[2] = {"Deimos", 16, 07, 2015, 02, 06, 2020, "lactose"  };
    chales[6].acampados[0] = {"Annabeth", 14, 03, 2014, 23, 06, 2024, "tintura"  };
    chales[6].acampados[1] = {"Polios", 13, 06, 2013, 21, 8, 2024, "amendoin"  };
    chales[6].acampados[2] = {"Minos", 29, 04, 2013, 20, 11, 2021, "vinagre"  };
    chales[7].acampados[0] = {"Orfeu", 24, 01, 2009, 25, 12, 2022, "amaciante"  };
    chales[7].acampados[1] = {"Aristeu", 23, 11, 2013, 27, 02, 2022, "pelo de gato"  };
    chales[7].acampados[2] = {"Troilo", 12, 12, 2011, 20, 04, 2023, "insetos"  };
    chales[8].acampados[0] = {"Keneis", 21, 10, 2008, 19, 04, 2019, "polen"  };
    chales[8].acampados[1] = {"Nadie", 26, 10, 2007, 13, 10, 2018, "grama"  };
    chales[8].acampados[2] = {"Neniu", 25, 06, 2012, 17, 03, 2021, "salsinha"  };
    chales[9].acampados[0] = {"Sole", 11, 03, 2014, 12, 01, 2020, "plastico"  };
    chales[9].acampados[1] = {"Akogo", 10, 01, 2012, 24, 8, 2017, "polen"  };
    chales[9].acampados[2] = {"Monos", 9, 02, 2012, 26, 02, 2022, "corante"  };
    chales[10].acampados[0] = {"Golgos", 07, 8, 2013, 13, 04, 2020, "lactose"  };
    chales[10].acampados[1] = {"Fobos", 03, 9, 2013, 16, 03, 2021, "lactose"  };
    chales[10].acampados[2] = {"Lynos", 02, 02, 2006, 13, 05, 2021, "Amoxilina, desonatadina"  };
    chales[11].acampados[0] = {"Maia", 01, 04, 2004, 12, 9, 2020, "brupomedina"  };
    chales[11].acampados[1] = {"Anfora", 13, 01, 2005, 18, 12, 2024, "iboprofeno"  };
    chales[11].acampados[2] = {"Atlas", 8, 07, 2002, 17, 11, 2023, "lactose"  };
    chales[12].acampados[0] = {"Toas", 06, 06, 2010, 30, 01, 2023, "fungo"  };
    chales[12].acampados[1] = {"Estafilo", 07, 05, 2011, 31, 05, 2023, "poeira"  };
    chales[12].acampados[2] = {"Pepareto", 10, 04, 2012, 28, 03, 2024, "polen"  };
    chales[13].acampados[0] = {"Melione", 11, 03, 2013, 29, 06, 2024, "tintura"  };
    chales[13].acampados[1] = {"Zagreu", 12, 02, 2013, 10, 11, 2021, "pelo de cachorro"  };
    chales[13].acampados[2] = {"Macaria", 31, 01, 2010, 01, 02, 2021, "bacon"  };

    for (int i = 1; i < 14; i++)
    {
        rank[i].premios = chales[i].premios;
        rank[i].chale = chales[i].chale;
    }

    cronograma[0] = {13, 30, 15, 00, "segunda", "Treino fisico", "Zeus"};
    cronograma[1] = {14, 30, 15, 30, "terca", "Cozinha", "Apolo"};
    cronograma[2] = {13, 00, 16, 00, "quarta", "Limpeza", "Hera"};
    cronograma[3] = {9, 00, 11, 00, "quinta", "Estudo", "Atena"};
    cronograma[4] = {8, 30, 12, 30, "sexta", "Treino fisico", "Dionisio"};
    cronograma[5] = {12, 30, 14, 30, "segunda", "Cuidar da roupa", "Hades"};
    cronograma[6] = {07, 30, 12, 00, "terca", "Pesca", "Demeter"};
    cronograma[7] = {16, 00, 18, 00, "quarta", "ESporte", "Ares"};
    cronograma[8] = {13, 30, 17, 00, "quinta", "Filmes", "Poseidon"};
    cronograma[9] = {13, 00, 15, 30, "sexta", "Jogos", "Artemis"};
    cronograma[10] = {10, 00, 12, 00, "segunda", "Limpeza", "Hermes"};
    cronograma[11] = {07, 00, 12, 30, "terca", "Treino fisico", "Hefestos"};
    cronograma[12] = {8, 30, 11, 30, "quarta", "Esporte", "Afrodite"};

    
}

void inicio (cria_chales chales[], rankiado rank[], cronogramas cronograma[]){
    system("cls");

    int escolha;

    cout << endl << endl << "      Acampamento: Meio-Sangue" << endl << "             Bem-vindo!" << endl << endl << endl << endl;
    cout << "            <1>Campistas" << endl << "           <2>Cronograma" << endl << "             <3>Ranking" << endl << "             <0>Fechar" << endl << endl;
    cout << " Escolha: ";
    cin >> escolha;

    if (escolha == 1 || escolha == 2 || escolha == 3)
    {
        switch (escolha)
        {
            case 1:
                system("cls");
                int escolha_camp;
                cout << "   O que deseja ver?" << endl << endl;
                cout << "           <1>Lista de campistas" << endl << "           <2>Lista de Chales" << endl << "           <0> Para voltar" << endl << endl;
                cout << " Escolha: ";
                cin >> escolha_camp;
                
                while(escolha_camp != 1 && escolha_camp != 2 && escolha_camp != 0){
                    cout << " Escolha invalida! Tente novamente: ";
                    cin >> escolha_camp;
                    cout << escolha_camp;
                }

                 if (escolha_camp == 1)
                {
                    listas(chales, rank, cronograma);
                }

                if(escolha_camp == 2)
                {
                    system("cls");
                    mostrar_chales(chales);
                    chales_menu(chales, rank, cronograma);
                    int v;
                    cin >> v;
                    inicio(chales, rank, cronograma);
                }   

                if (escolha_camp == 0)
                {
                    inicio(chales, rank, cronograma);
                }
                
                break;

            case 2:
                system("cls");
                M_crono(cronograma, chales, rank);

                inicio(chales, rank, cronograma);
                break;

            case 3:
                for (int i = 1; i < 14; i++)
                {
                    rank[i].premios = chales[i].premios;
                    rank[i].chale = chales[i].chale;
                }
                system("cls");
                bubble_r(rank, 14);
                cout << setw(10) << "Chales" << setw(20) << "Premios" << endl << endl;
                for (int i = 1; i < 14; i++)
                {
                    cout << setw(10) << rank[i].chale << setw(20) << rank[i].premios << endl << endl;
                }
                
                cout << endl << endl << "<0> para voltar: ";
                int volt;
                cin >> volt;
                if (volt == 0)
                {
                    inicio(chales, rank, cronograma);
                }
                else
                {
                    break;
                }
                break;  

            default:
            break;
        }
        
    }
}

void listas(cria_chales chale[], rankiado rank[], cronogramas cronograma[]){
    system("cls");
    cout << endl << endl << setw(10) <<"chale" << setw(20) << "Nome" << setw(30) << "Data de entrada" << setw(30) << "Data de aniversario" << setw(20)<< "Alergias" << endl << endl << endl;
    mostrar_campistas(chale);
    cout << endl << endl <<"            <1>Adicionar" << endl << "           <2>Editar" << endl << "             <3>Excluir" << endl << "             <0>Voltar"  << endl << endl;
    int escolha_listacamp;

    cout << " Escolha: ";
    cin >> escolha_listacamp;
    switch (escolha_listacamp)
    {
    case 1:
        adicionar_camp(chale, rank, cronograma);
        break;
    case 2:
        editar_camp(chale, rank, cronograma);
        break;    
    case 3:
        excluir_camp(chale, rank, cronograma);
        break;
    case 0:
        inicio(chale, rank, cronograma);    
        break;
    default:
        cout << " Escolha invalida! Tente novamente: ";
        cin >> escolha_listacamp;
        break;
    }

}

void chales_menu(cria_chales chale[], rankiado rank[], cronogramas cronograma[]){
    cout << endl << endl << "Deseja alterar os premios? <1> para sim ou <0> para voltar: ";
    int res;
    cin >> res;
    if (res == 1)
    {
        cout << "De qual chale deseja editar? Escreva o numero do chale: ";
        int cha;
        cin >> cha;
        cout << "Qual a nova quantidade de premios? ";
        cin >> chale[cha].premios;
        cout << "Editado com sucesso! <0> para voltar: ";
    }
    else if (res == 0)
    {
        inicio(chale, rank, cronograma);
    }
    else{
        cout << endl << " Escolha invalida! Tente novamente: ";
        cin >> res;
    }
}

void mostrar_chales(cria_chales chale[]){
    cout << setw(10) << "Chales" << setw(20) << "Premios" << endl << endl;

    for (int i = 1; i < 14; i++)
    {
        cout << setw(10) << (*(chale + i)).chale << setw(20) << (*(chale + i)).premios << endl << endl;
    }
}

void mostrar_campistas(cria_chales chale[]){
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (!chale[i].acampados[j].nome.empty())
            {
                cout << setw(10) << chale[i].chale << setw(20) << chale[i].acampados[j].nome << setw(20) << chale[i].acampados[j].entrada.dia << "/" << chale[i].acampados[j].entrada.mes << "/" << chale[i].acampados[j].entrada.ano << setw(20) << chale[i].acampados[j].aniversario.dia << "/" << chale[i].acampados[j].aniversario.mes << "/" << chale[i].acampados[j].aniversario.ano << setw(30) << chale[i].acampados[j].alergias << endl << endl;
            }
            
        }
    }
}

int percorrer(int n, cria_chales chale[]){
    system("cls");
    int i = 0;
    while (!chale[n].acampados[i].nome.empty())
    {
        i++;
    }
    if (i<20)
    {
        cout << i;
        return i;
    }
    else{
        return -1;
    }
    
}

void adicionar_camp(cria_chales chales[], rankiado rank[], cronogramas cronograma[]){
    system("cls");
    cout << "Em qual chale deseja adicionar um campista? escreva o numero do chale: ";
    int n, i;
    cin >> n;
    i = percorrer(n, chales);
    if (i == -1)
    {
        cout << "Chale cheio!";
    }
    else{
        cout << "Nome do campista: ";
        cin >> chales[n].acampados[i].nome;
        cout << endl << "Data de entrada, dia: ";
        cin >> chales[n].acampados[i].entrada.dia;
        cout << endl << "Data de entrada, mes: ";
        cin >> chales[n].acampados[i].entrada.mes;
        cout << endl << "Data de entrada, ano: ";
        cin >> chales[n].acampados[i].entrada.ano;
        cout << endl << "Data de aniversario, dia: ";
        cin >> chales[n].acampados[i].aniversario.dia;
        cout << endl << "Data de aniversario, mes: ";
        cin >> chales[n].acampados[i].aniversario.mes;
        cout << endl << "Data de aniversario, ano: ";
        cin >> chales[n].acampados[i].aniversario.ano;
        cout << endl << "Alergias, separe-as por virgula: ";
        cin.ignore();
        getline(cin, chales[n].acampados[i].alergias);
        cout << "Cadastro completo!";
    }
    cout << "Deseja voltar a lista? <1> para sim, <0> para fechar: ";
    int voltar_n;
    cin >> voltar_n;
    if (voltar_n == 1)
    {
        listas(chales, rank, cronograma);
    }
}

void editar_camp(cria_chales chales[], rankiado rank[], cronogramas cronograma[]){
    system("cls");
    cout << endl << endl << "Qual chale deseja editar? Escreva o numero do chale: ";
    int ed_chale;
    cin >> ed_chale;
    cout << endl << "Qual campista deseja editar? Escreva o nome com a primeira letra maiuscula, por exemplo, 'Perseu': ";
    string nome_campista;
    cin >> nome_campista;
    int resp;
    for (int i = 0; i < 20; i++)
    {
        if (chales[ed_chale].acampados[i].nome == nome_campista)
        {
            cout << " Campista encontrado! O que deseja editar? <1>Nome <2>Data de entrada <3>Data de aniversario <4>alergias <0>voltar" << endl;
            cin >> resp;
            switch (resp)
            {
            case 1:
                cout << endl << "Novo nome: ";
                cin >> chales[ed_chale].acampados[i].nome;
                break;
            case 2:
                cout << endl << "Novo dia de entrada: ";
                cin >> chales[ed_chale].acampados[i].entrada.dia;
                cout << endl << "Novo mes de entrada: ";
                cin >> chales[ed_chale].acampados[i].entrada.mes;
                cout << endl << "Novo ano de entrada: ";
                cin >> chales[ed_chale].acampados[i].entrada.ano;
                break;
            case 3:
                cout << endl << "Novo dia de aniversario: ";
                cin >> chales[ed_chale].acampados[i].aniversario.dia;
                cout << endl << "Novo mes de aniversario: ";
                cin >> chales[ed_chale].acampados[i].aniversario.mes;
                cout << endl << "Novo ano de aniversario: ";
                cin >> chales[ed_chale].acampados[i].aniversario.ano;
                break;        
            case 4:
                cout << endl << "Novas alergias, escreva todas: ";
                cin.ignore();
                getline(cin,chales[ed_chale].acampados[i].alergias);
                break;
            default:
                listas(chales, rank, cronograma);
                break;
            }
        }
        
    }
    cout << "Deseja voltar? <0>";
    cin >> resp;
    if (resp == 0)
    {
        listas(chales, rank, cronograma);
    }
}    

void excluir_camp(cria_chales chales[], rankiado rank[], cronogramas cronograma[]){
    system("cls");
    cout << endl << endl << "Qual chale deseja excluir? Escreva o numero do chale: ";
    int ed_chale;
    cin >> ed_chale;

    if (ed_chale >= 1 && ed_chale <= 13) {
        cout << endl << "Qual campista deseja excluir? Escreva o nome com a primeira letra maiuscula, por exemplo, 'Perseu': ";
        string nome_campista;
        cin >> nome_campista;
        int resp;
        for (int i = 0; i < 20; i++) {
            if (chales[ed_chale].acampados[i].nome == nome_campista) {
                cout << "Campista encontrado! Deseja realmente excluir " << nome_campista << "? <1> sim ou <2> para nao: ";
                cin >> resp;
                if (resp == 1) {
                    chales[ed_chale].acampados[i] = {" ", 0, 0, 0, 0, 0, 0, " "};
                    cout << "Deseja voltar? <0> ";
                    int voltar;
                    cin >> voltar;
                    listas(chales, rank, cronograma);
                }
            }
            else{
                int enter;
                cout << "Campista nao encontrado! Aperte <0> para voltar: ";
                cin >> enter;
                if (enter == 0)
                {
                    listas(chales, rank, cronograma);
                }
            }
        }
    } else {
        cout << "Invalido!";
    }
}    

void troca(rankiado a[], int j) {
    a[0].premios = a[j].premios;
    a[j].premios = a[j+1].premios;
    a[j+1].premios = a[0].premios;   

    a[0].chale = a[j].chale;
    a[j].chale = a[j+1].chale;
    a[j+1].chale = a[0].chale;
}

void bubble_r(rankiado rank[], int n) {
    if (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (rank[j].premios < rank[j + 1].premios) { // Alteração aqui para ordem decrescente
                    troca(rank, j);
                }
            }
        }
    }
}

void M_crono(cronogramas cronograma[], cria_chales chales[], rankiado rank[]){
    system("cls");
    cout << setw(10) << "Inicio" << setw(20) << "Termino" << setw(20) << "Dia" << setw(20) << "Atividade" << setw(20) << "Chale" << endl;
    for (int i = 0; i < 100; i++) {
        if (!cronograma[i].chale.empty()) {
            cout << setw(10) << cronograma[i].inicio.h << ":" << cronograma[i].inicio.min << setw(20)
                 << cronograma[i].termimino.h << ":" << cronograma[i].termimino.min << setw(20)
                 << cronograma[i].semana << setw(20) << cronograma[i].atividade << setw(20) << cronograma[i].chale << endl << endl;
        }
    }

    cout << "Deseja ver alguma atividade ou horario? <1> atividade <2> horario <0> voltar ";
    int ec;
    cin >> ec;

    if (ec == 1) {
        system("cls");
        cout << "Qual atividade deseja ver? escreva exatamente: ";
        string atividade;
        cin.ignore();
        getline(cin, atividade);

        int* ptr = new(nothrow) int[20];
        for (int i = 0; i < 20; i++) {
            ptr[i] = -1;
        }

        if (ptr == nullptr) {
            cout << "Falha de alocacao de memoria" << endl;
            inicio(chales, rank, cronograma);
        }

        int i = 0;
        for (int j = 0; j < 100; j++) {
            if (cronograma[j].atividade == atividade && i < 20) {
                ptr[i++] = j;
            }
        }

        system("cls");
        cout << "Atividade: " << atividade << endl << endl;
        for (int i = 0; i < 20; i++) {
            if (ptr[i] != -1) {
                cout << setw(10) << cronograma[ptr[i]].inicio.h << ":" << cronograma[ptr[i]].inicio.min << setw(20)
                     << cronograma[ptr[i]].termimino.h << ":" << cronograma[ptr[i]].termimino.min << setw(20)
                     << cronograma[ptr[i]].semana << setw(20) << cronograma[ptr[i]].chale << endl << endl;
            }
        }

        delete[] ptr;

        cout << endl << "Deseja voltar? Pressione <0>: ";
        int g;
        cin >> g;
        if (g == 0) {
            M_crono(cronograma, chales, rank);
        }
    }

    if (ec == 2) {
        system("cls");
        cout << "Qual o horario de inicio que deseja ver se esta ocupado?" << endl;
        int h, min;
        cout << "Hora: ";
        cin >> h;
        cout << "Minutagem: ";
        cin >> min;
        cout << endl << "Qual o dia da semana? ";
        string dia;
        cin >> dia;

        int* p = new(nothrow) int[20];
        for (int i = 0; i < 20; i++) {
            p[i] = -1;
        }

        if (p == nullptr) {
            cout << "Falha de alocacao de memoria" << endl;
            M_crono(cronograma, chales, rank);
        }

        int l = 0;
        for (int i = 0; i < 100; i++) {
            if (cronograma[i].inicio.h == h && cronograma[i].inicio.min == min && cronograma[i].semana == dia) {
                p[l++] = i;
            }
        }

        cout << setw(10) << "Chale" << setw(20) << "Atividade" << endl << endl;
        for (int i = 0; i < 20; i++) {
            if (p[i] != -1) {
                cout << setw(10) << cronograma[p[i]].chale << setw(20) << cronograma[p[i]].atividade << endl << endl;
            }
        }

        delete[] p;
        cout << "<0> para voltar: ";
        int v;
        cin >> v;
        if (v == 0)
        {
            M_crono(cronograma, chales, rank);
        }
        
    }

    if (ec == 0) {
        inicio(chales, rank, cronograma);
    }
}

void teste_bubble(){
    // Teste para um array desordenado
    rankiado rank1[5] = {{"dez", 1}, {"cinco", 2}, {"oito", 3}, {"um", 4}, {"tres", 5}};
    bubble_r(rank1, 5);
    assert(rank1[0].premios == 5);

    // Teste para um array ordenado em ordem crescente
    rankiado rank2[] = {{"seis", 1}, {"seis", 1}, {"seis", 1}, {"seis", 1}, {"seis", 1}};
    bubble_r(rank2, 5);
    assert(rank2[0].premios == 1);


    // Teste para um array com todos os elementos iguais
    rankiado rank3[] = {{"seis", 5}, {"seis", 4}, {"seis", 3}, {"seis", 2}, {"seis", 1}};
    bubble_r(rank3, 5);
    assert(rank3[0].premios == 5);

    cout << "Testes Aprovados!";
}





