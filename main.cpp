#include <iostream>
#include <math.h>
#include <conio.h>
#include "fonction.h"
using namespace std;

int main()

{
	int tab[3][3],i,j,somP=0,prodS=1,grand,petit,cpairl1=0,cimpc3=0,e=5,comptE=0,somPM=0,somIM=0;
    int choixope;
    int choixn;
    int choixe;
    int choixu;
    int choixv;
    int choixmath;
    int choixp;
    int choixh;
    int choixG;

    menu:
    cout<<"=======BIENVENUE SUR NOTRE APPLICATION========"<<endl;
    cout<<"1----------------Operation de codage/Decodage/transcodage"<<endl;
    cout<<"2----------------Operation mathematique"<<endl;
    cout<<"3----------------Gestion sur un etudiant"<<endl;
    cout<<"4----------------Ma realisation"<<endl;
    cout<<"5----------------quitter l'application"<<endl;
    cin>>choixope;
    system("cls");
    while(choixope<1||choixope>5)
    {
        cout<<"Erreur, choisissez l'une des options dans le menu "<<endl;
        break;
    }
    switch(choixope)
    {
        case 1:
           	cout<<"=====CODAGE/DECODAGE/TRANSCODAGE====="<<endl;
            cout<<"1-Decimal"<<endl;
            cout<<"2-Binaire"<<endl;
            cout<<"3-Hexadecimal"<<endl;
            cout<<"4-Retour au menu principal"<<endl;
            cin>>choixn;
            system("cls");
            switch(choixn)
            {
            case 1:
                cout<<"1-En binaire"<<endl;
                cout<<"2-Octal"<<endl;
                cout<<"3-Hexadecimal"<<endl;
                cin>>choixe;
                system("cls");
                switch(choixe)
                {
                case 1:
                    codagedecimalenbinaire( );
                    /*Operation*/
                    break;
                case 2:
                     codagedecimalaoctal();
                     /*Operation*/
                     break;
                case 3:
                     codagedecimalahexadecimal();
                     /*Operation*/
                     break;
                }
                break;
                case 2:
                     cout<<"1-En Decimal"<<endl;
                      cout<<"2-En Octal"<<endl;
                       cout<<"3-En Hexadecimal"<<endl;
                cin>>choixu;
                system("cls");
                switch(choixu)
                {
                     case 1:
                    binaireadecimal();
                    /*Operation*/
                    break;
                case 2:
                      binaireaoctal();
                     /*Operation*/
                     break;
                case 3:
                      binaireahexadecimal ();
                     /*Operation*/
                     break;
                }
                break;
                case 3:
                    cout<<"1------Octal"<<endl;
                    cout<<"2------Binaire"<<endl;
                    cout<<"3------Decimal"<<endl;
                cin>>choixv;
                system("cls");
                switch(choixv)
                {
                case 1:
                    hexadecilmalaoctal();
                    /*Operation*/
                    break;
                case 2:
                      hexadecimalabinaire();
                     /*Operation*/
                     break;
                case 3:
                    hexadecimaladecimal();
                     /*Operation*/
                     break;
                }
                break;
                case 4:
                    {
                    	default:
				goto menu;
				break;
                    }
            }
           break;

            case 2:
            	cout<<"======OPERATION MATHEMATIQUE======"<<endl;
                cout<<"1-------Carr"<<char(130)<<" magique"<<endl;
                cout<<"2-------Manipulation d'une matrice de 3 lignes et 3 colones"<<endl;
                cin>>choixmath;
                system("cls");
                switch(choixmath)
                {
                case 1:
                	cout<<"=====CARRE MAGIQUE====="<<endl;
                    cout<<"1....ordre pair"<<endl;
                    cout<<"2.....ordre impair"<<endl;
                    cin>>choixp;
                    system("cls");
                    switch(choixp)
                    {
                    case 1:
                    {
                        cout<<"Ordre pair:"<<endl;
                        /*operation*/
                         int dim = 4;
    int tab[dim][dim];
    int diag[dim];
    int l, k = 1;

    // Remplir le Tableau
    cout<<""<<endl;
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++){
            tab[i][j] = k;
            k++;
        }

    // Afficher le tableau Avant permutation
//    for(int i = 0; i < dim; i++){
//        for(int j = 0; j < dim; j++)
//            cout << tab[i][j] << "\t";
//        cout << endl;
//    }

    //Recupere la Diag principal
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            if (i == j)
                diag[i] = tab[i][j];

    //Remplacer la Diag principal Inverser
    l = dim - 1;
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            if (i == j){
                tab[i][j] = diag[l];
                l--;
            }

    //Recupere la Diag Secondaire
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            if (i + j == dim - 1)
                diag[i] = tab[i][j];


    //Remplacer la Diag secondaire Inverser
    l = dim - 1;
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            if (i + j == dim - 1){
                tab[i][j] = diag[l];
                l--;
            }


    cout << endl << endl;
    // Afficher le tableau Apres permutation
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++)
            cout << tab[i][j] << "\t";
        cout << endl;
    }

                        break;
                    }
                    case 2:
                         cout<<"Ordre impair:"<<endl;
                         /*operation*/
                         break;
                    }
                    break;
                    case 2:
                    	cout<<"========MANIPULATION D'UNE MATRICE========"<<endl;
                    cout<<"1-Saisir et affichage des"<<char(130)<<"l"<<char(130)<<"mens de la matrice"<<endl;
                    cout<<"2-La somme des "<<char(130)<<"l"<<char(130)<<"ments de la diagonale principale"<<endl;
                    cout<<"3-Les produits des"<<char(130)<<"l"<<char(130)<<"ments de la diagonale secondaire"<<endl;
                    cout<<"4-Le plus petit et le plus grand "<<char(130)<<"l"<<char(130)<<"ments de la matrice"<<endl;
                    cout<<"5-Le nombre d'"<<char(130)<<"l"<<char(130)<<"ments pairs de la premiere ligne"<<endl;
                    cout<<"6-Le nombre d'"<<char(130)<<"l"<<char(130)<<"ments impairs de la derniere colonne"<<endl;
                    cout<<"7-L'"<<char(130)<<"l"<<char(130)<<"ments 5 existe-t-il dans la matrice?Si oui combien de fois"<<endl;
                    cout<<"8-Comparer la somme des "<<char(130)<<"l"<<char(130)<<"ments pairs par rapport à la somme des "<<char(130)<<"l"<<char(130)<<"ments impairs de la matrice"<<endl;
                    cout<<"9-Résolution d'un systeme d'equation à deux inconnues"<<endl;
                    cout<<"10-Determinant et la transposee d'une matrice quelconque"<<endl;
                    cout<<"11-Retour au menu principal"<<endl;
                cin>>choixh;
                system("cls");
                switch(choixh)
                {
                case 1:
                    {

for(i=0;i<3;i++){
for(j=0;j<3;j++){

cout<<"La valeur"<<i<<","<<j<<endl;
cin>>tab[i][j];

}
}
cout<<"Les elements saisis sont"<<endl;
for(i=0;i<3;i++){
     cout<<endl;
for(j=0;j<3;j++){
cout<<tab[i][j]<<"\t";
}
}

                    }

                    case 2:
                    {
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i==j)
    somP=somP+tab[i][j];
}
}

cout<<"\n La somme des elements de la diagonale principale est  "<<somP<<endl;

                     break;
                    }
                    case 3:
                    {
                     break;
                    }
                    case 4:
                    {
                     break;
                    }
                    case 5:
                    {
                     break;
                    }
                    case 6:
                    {
                     break;
                    }
                    case 7:
                    {
                     break;
                    }
                    case 8:
                    {
                     break;
                    }
                     case 9:
                    {
                     break;
                    }
                     case 10:
                    {
                     break;
                    }
                     case 11:
                    {
                     default:
					goto menu;
                    }
                }

                break;
                }
                break;
            case 3:
            	cout<<"=======GESTION D'INFORMATION SUR UN ETUDIANT========"<<endl;
              cout<<"1......Saisir les informations suivantes sur un "<<char(130)<<"tudiant(code,nom,prenom,adresse,sexe)"<<endl;
              cout<<"2......Affichage des informations du fichier"<<endl;
              cout<<"3......Afficher les informations sur les "<<char(130)<<"tudiants par ordre alphab"<<char(130)<<"tique des nom"<<endl;
              cout<<"4......Retour au menu principal"<<endl;
              cin>>choixG;
              system("cls");
              switch(choixG)
              {
              case 1:
                {
                    addStudent( );
                    break;
                }
              case 2:
                {
                    afficheFichier();
                    break;
                }
              case 3:
                {
                    break;
                }
              case 4:
                {
			  default:
				goto menu;
                }
              }
              break;
              case 4:
				{
					cout<<"=========Je voudrais vous souhaiter une chaleureuse bienvenue a tous ========"<<endl;
				cout<<"Il est dit que deux ennemis qui s'affronte finissent par penser de la meme maniere\n le but du jeux est simple deviner ce que pense votre adversaire ."<<endl;
				cout<<"++++++La partie peut commencer+++++++"<<endl;
				      petitprogramme();
				break;
				}
			  case 5:
			  	cout<<"=======Bonne fete de fin d'ann"<<char(130)<<"e ======="<<endl;
				break;
    }
    getch();
}
