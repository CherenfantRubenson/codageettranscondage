#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include<cstdlib>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;


 /*Codage decimal en binaire*/

void codagedecimalenbinaire( void){

    int nomb,tab[10];
    int i=0,moduloval, j;
 cout<< "Entrer le  nombre decimal a convertir en binaire \n";
 cin>>nomb;

    while(nomb!=0)
    {
  moduloval = nomb%2;
  tab[i++] = moduloval;
  nomb /= 2;
}

for(j=i-1;j>=0;j--)

cout<<tab[j];




}

 /*Codage decimal en Octal*/
void codagedecimalaoctal(void){
int nomb,tab[10];
 cout<< "Entrer le  nombre decimal a convertir octal \n";
 cin>>nomb;
 int i=0,moduloval, j;
 while(nomb!=0)
{
  moduloval = nomb%8;
  tab[i++] = moduloval;
  nomb /= 8;
}

for(j=i-1;j>=0;j--)
 cout<<tab[j];

}

/*Codage decimal en Octal*/


void codagedecimalahexadecimal(void){

    int nomb,tab[10];
     cout<< "Entrer le  nombre decimal a convertir en hexadecimal\n";
     cin>>nomb;
     int i=0,moduloval, j;

     while(nomb!=0)
    {
      moduloval = nomb%16;

      tab[i++] = moduloval;
      nomb /= 16;

    }

    for(j=i-1;j>=0;j--)




    switch (tab[j])

    {
    case 10 :
        cout<< "A";
        break;

    case 11:
        cout<< "B";
        break;

    case 12:
        cout<< "C";
        break;

    case '13':
        cout<< "D";
        break;

        case '14':
        cout<< "E";
        break;
    case '15':
        cout<< "F";
        break;
    default:
        cout<< tab[j];
    }
    }






/*Codage binaire en decimal */

void binaireadecimal(void ){
              int tab[1000];
  int i = 1, j = 0, pointeur, nombdec = 0, binval;

	cout << " Entrer votre nombre binaire a convertir en decimal:\n ";
	cin>> binval;


  while (binval > 0)
  {
   pointeur = binval % 2;
   nombdec = nombdec + pointeur * i;
   i = i * 2;
   binval = binval / 10;
  }
   i = 0;
  while (nombdec != 0)
  {
   tab[i] = nombdec % 10;
   nombdec = nombdec / 10;
   i++;
  }

  for (j = i - 1; j >= 0; j--)


     cout<<tab[j];


}

/*codage binaire en Octal*/


void binaireaoctal( void){

            int tab[1000];
  int i = 1, j = 0, pointeur, nombdec = 0, binval;

	cout << " Entrer votre nombre binaire:\n ";
	cin>> binval;


  while (binval > 0)
  {
   pointeur = binval % 2;
   nombdec = nombdec + pointeur * i;
   i = i * 2;
   binval = binval / 10;
  }
   i = 0;
  while (nombdec != 0)
  {
   tab[i] = nombdec % 8;
   nombdec = nombdec / 8;
   i++;
  }

  for (j = i - 1; j >= 0; j--)


     cout<<tab[j];

}
        /*codage binaire a Hexadecimal*/

void binaireahexadecimal (void){


    int binaire, hex=0, mul=1, chk=1, rem, i=0;
    char hexDecNum[20];

    cout<<"Entrer le nombre en Binaire >> ";
    cin>>binaire;

    while(binaire!=0)
    {
        rem = binaire%10;
        hex = hex + (rem*mul);

        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binaire = binaire/10;
    }

    if(chk!=1)
        hexDecNum[i] = hex+48;

    if(chk==1)
        i--;

    cout<<"\nLe Nombre en Hexadecimal est : ";

    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;


}

/*codage hexadecimal en octal*/

void hexadecilmalaoctal(void){

             int decimalNum=0, octalNum[30], rem, i=0, len=0;
    char hexDecNum[10];

    cout<<"Entrer le nombre en Hexadecimal >> ";
    cin>>hexDecNum;

    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"Erreur votre nombdre est incorrect";
            cout<<endl;

}

decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;

    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout << "\nLe nombre en Octal est : ";

    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout << endl;
}



        /*codage hexadecimal en binaire*/


        void hexadecimalabinaire(void){


  string hex;
  int nomb,i;


	cout << " Entrer votre nombre hexadecimal:\n ";
	cin>> hex;

    for(int i = 0; i < hex.size(); i++)
        switch (hex[i]){
                case '0':
                    cout<<"0000";
                    break;
                case '1':
                    cout<<"0001";
                    break;
                case '2':
                    cout<<"0010";
                    break;
                case '3':
                    cout<<"0011";
                    break;
                case '4':
                    cout<<"0100";
                    break;
                case '5':
                    cout<<"0101";
                    break;
                case '6':
                    cout<<"0110";
                    break;
                case '7':
                    cout<<"0111";
                    break;
                case '8':
                    cout<<"1000";
                    break;
                case '9':
                    cout<<"1001";
                    break;
                case 'A':
                case 'a':
                    cout<<"1010";
                    break;
                case 'B':
                case 'b':
                    cout<<"1011";
                    break;
                case 'C':
                case 'c':
                    cout<<"1100";
                    break;
                case 'D':
                case 'd':
                    cout<<"1101";
                    break;
                case 'E':
                case 'e':
                    cout<<"1110";
                    break;
                case 'F':
                case 'f':
                    cout<<"1111";
                    break;
                default:
                    cout<<"Votre nombre est incorrect "<<hex[i];
            }


        }
        /*Hexadecimal en Decimal*/

        void hexadecimaladecimal(void){




              char num[20];
    int i, r, len, hex = 0;

    cout << "Entrer le nombre en Hexadecimal >> ";
    cin >> num;

    len = strlen(num);

    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout << "\nLe nombre en Decimal est : " << hex << endl;


        }

        void addStudent(void)
{
    string nom, prenom, adresse, code;
    char sexe;
    string n, p;
    ofstream fichier("student_info.txt", ios::app);

    if (fichier)
    {

        cout << "Nom : ";
        getline(cin, nom);
        nom[0] = toupper(nom[0]);

        cout << "Prenom : ";
        getline(cin, prenom);
        prenom[0] = toupper(prenom[0]);

        cout << "Adresse : ";
        getline(cin, adresse);

        do
        {
            cout << "Sexe : ";
            cin >> sexe;
            sexe = toupper(sexe);

            if (sexe != 'M' && sexe != 'F')
                cout << "ENTRER INVALID !!! - Veuillez entrer [m|M] ou [f|F] ... " << endl;
        } while (sexe != 'M' && sexe != 'F');

        for (int i = 0; i <= 2; i++)
        {
            n += toupper(nom[i]);
            p += toupper(prenom[i]);
        }

        code = n + "-" + sexe + "-" + p;

        fichier << nom << "\t" << prenom << "\t" << adresse << "\t" << sexe << "\t" << code << "\t" << endl;

        cout << "\nEtudiant Ajouter ..." << endl;
    }
    else
        cout << "ERREUR - Fichier Innacessible !!!";
}


void afficheFichier(void)
{

    ifstream fichier("student_info.txt");
    string ligne;

    if (fichier)
    {
        if (getline(fichier, ligne))
        {
            fichier.seekg(0, ios::beg);
            while (getline(fichier, ligne))
            {
                cout << ligne << endl;
            }
        }else
            cout << "Aucun Etudiant Enregistre...";
    }
    else
        cout << "ERREUR - Fichier Innacessible !!!";

    cout << endl;
}




void equation()
{
    float X,X_2,Y,Y_2,Z,Z_2;
    cout<<"...X  + ...Y  = Z"<<endl;
    cout<<"...X' + ...Y' = Z'"<<endl;
    cout<<"entre la valeur de X, X', Y, Y', Z, z'"<<endl;
    cout<<endl<<"X : ";
    cin>>X;
    cout<<endl<<"X': ";
    cin>>X_2;
    cout<<endl<<"Y : ";
    cin>>Y;
    cout<<endl<<"Y': ";
    cin>>Y_2;
    cout<<endl<<"Z : ";
    cin>>Z;
    cout<<endl<<"Z': ";
    cin>>Z_2;
    //clear_console();
    cout<<X<<"X  + "<<Y<<"Y  = "<<Z<<"Z"<<endl;
    cout<<X_2<<"X  + "<<Y_2<<"Y  = "<<Z_2<<"Z"<<endl;
    float det = X*Y_2 - X_2*Y;
    if (det == 0)
    {
        cout<<"pas de solution"<<endl;
    }
    else
    {
        float result_x = (Z*Y_2 - Z_2*Y)/det;
        float result_y = (Z_2*X - Z*X_2)/det;
        cout<<"le resultat est (x,y)"<<"("<<result_x<<","<<result_y<<")"<<endl;
    }
}


void petitprogramme(){

int tab1[4],tab2[4],tab3[4],tab4[4],i,p[4],g;
cout<<"        Hello!!C'est un petit programme ayant quatres tableaux de dimension 4.Les deux premiers tableaux seront remplis librement,par contre il y a un calcul fait pour le remplissage automatique des  deux derniers tableaux.Le troisieme tableau doit prendre le produit des deux premiers tableaux et le quatrieme tableau doit prendre le triple du troisieme tableau en le retranchant de 5. ."<<endl;

cout<<"        ======================================================================================="<<endl;
cout<<"Veuillez remplir le premier tableau."<<endl;
for(i=0;i<4;i++){
 cout<<"L'element numero  "<<i+1<<endl;
 cin>>tab1[i];
}

cout<<endl;
cout<<"Veuillez remplir le deuxieme tableau"<<endl;
for(i=0;i<4;i++){
 cout<<"L'element numero  "<<i+1<<endl;
cin>>tab2[i];
}
cout<<"Les elements saisis dans le premier tableau sont: \n";
for(i=0;i<4;i++){
cout<<tab1[i]<<"\t";
}
cout<<endl;
cout<<"Les elements saisis dans le deuxieme tableau sont: \n";
for(i=0;i<4;i++){
 cout<<tab2[i]<<"\t";
}

cout<<endl;
for(i=0;i<4;i++){
tab3[i]=tab1[i]*tab2[i];
}
cout<<"Le troisieme tableau contiennent les nombres suivants:"<<endl;
for(i=0;i<4;i++){
        cout<<tab3[i]<<"\t";
}

for( i = 0; i <4; i++){
            tab4[i] = tab3[i]*3-5;

}
cout<<endl;
cout<<"Le 4eme tableau contiennent les nombres suivants"<<endl;

for( i = 0; i<4; i++){
        cout<<tab4[i]<<"\t";
}
}

void carremagique(){
int dim = 4;
    int tab[dim][dim];
    int diag[dim];
    int l, k = 1;

    // Remplir le Tableau
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
}
