#include <iostream>
#include <string>
using namespace std;

double Addition(double nbCalcul1, double nbCalcul2){
    double resultat(nbCalcul1 + nbCalcul2);                //Addition

    return resultat;
}

double Soustraction(double nbCalcul1, double nbCalcul2){
    double resultat(nbCalcul1 - nbCalcul2);                //Soustraction

    return resultat;
}

double Multiplication(double nbCalcul1, double nbCalcul2){
    double resultat(nbCalcul1 * nbCalcul2);                //Multiplication

    return resultat;
}

double Division(double nbCalcul1, double nbCalcul2){
    double resultat(nbCalcul1 / nbCalcul2);                //Division

    return resultat;
}


int main(){
    double nb1;
    double nb2;            //initialise toutes les variables
    string typeCalcul;
    bool bonTypeCalcul(false);

    cout << endl << "Quelle opération voulez vous faire ? (addition, soustraction, multiplication, division)" << endl;
    cout << "Pour des nombres à virgules, remplacez le ',' par un '.' " << endl;
    cin >> typeCalcul;

    if (typeCalcul == "addition")
    {

        bonTypeCalcul = true;

        cout << "Choisissez un premier nombre" << endl; //1er nombre
        cin >> nb1;
                                                                        //++++++++++++++++++++++
        cout << "Choisissez un deuxième nombre" << endl; //2e nombre    //+ Opération ADDITION +
        cin >> nb2;                                                     //++++++++++++++++++++++

        cout << nb1 << " + " << nb2 << " = " << Addition(nb1, nb2) <<endl;

    }
    else if (typeCalcul == "soustraction")
    {
                                                                            //--------------------------
        bonTypeCalcul = true;                                           //- Opération SOUSTRACTION -
                                                                            //--------------------------
        cout << "Choisissez un premier nombre" << endl; //1er nombre
        cin >> nb1;

        cout << "Choisissez un deuxième nombre" << endl; //2e nombre                
        cin >> nb2;

        cout << nb1 << " - " << nb2 << " = " << Soustraction(nb1, nb2) <<endl; //opération faite dans le "cout" (fonction appelée)                                                              
    }
    else if (typeCalcul == "multiplication")
    {
                                                                        //****************************
        bonTypeCalcul = true;                                           //* Opération MULTIPLICATION *
                                                                            //****************************
        cout << "Choisissez un premier nombre" << endl; //1er nombre
        cin >> nb1;

        cout << "Choisissez un deuxième nombre" << endl; //2e nombre                
        cin >> nb2;

        cout << nb1 << " x " << nb2 << " = " << Multiplication(nb1, nb2) <<endl; //opération faite dans le "cout" (fonction appelée)
    }
    else if (typeCalcul == "division")
    {
                                                                            //////////////////////////
        bonTypeCalcul = true;                                           /// Opération DIVISION ///
                                                                            //////////////////////////
        cout << "Choisissez un premier nombre" << endl; //1er nombre
        cin >> nb1;

        cout << "Choisissez un deuxième nombre" << endl; //2e nombre                
        cin >> nb2;

        cout << nb1 << " / " << nb2 << " = " << Division(nb1, nb2) <<endl; //opération faite dans le "cout" (fonction appelée)
    }
    else
    {                                                                   //xxxxxxxxxxxxxxxx
        cout << "Choisissez un bon type d'opération !" << endl;         //x MAUVAIS TYPE x
    }                                                                   //xxxxxxxxxxxxxxxx

    
}

