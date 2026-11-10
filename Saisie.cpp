#include uincampus/saisie.npp
#include "uincampus/regles.hpp"
#include ‹iostream›
#include ‹sstream>
namespace uin {
namespace ‹ // espace de noms anonyme : fonctions internes à ce fichier (chapitre 4)
std: :string lireLigne(std: :string_view invite)
std: : cout « invite;
std: : string ligne;
std: :getline(std::cin, ligne);
return ligne:
bool estEntierStrict(const std: : string& texte, int& valeur)
sta. istringstream tux textes;
char restes;
return (flux > valeur) && ! (flux > reste);
bool estreelstrict sta::string texte, double& valeur)
for (char& c : texte) {
if (c == ',') { ='.'; }
std: :istringstream flux texte?:
char restes;
return (flux > valeur) && ! (flux > reste);
3 l namespace
sta. .string Irelexte(sta..scring_view Invite)
return lireLigne(invite);
int lireentier(sta::string view invite, int mın, int max)
while (std: cin) {
const std: : string ligne = lireLigne (invite);
int valeur();
if (!estEntierStrict(ligne, valeur)) {
std:: cout « " Saisie invalide : entrez un nombre entier. \n";
} else if (valeur ‹ min || valeur › max) {
std:: cout ‹‹ " La valeur doit être comprise entre " ‹< min ‹‹ " et " ‹< max ‹< ".\n";
} else {
return valeur;
return min;
/tn dentree: valeur de repli (sera remplacee par une exception au chapitre 15)
double lireNote(std:: string_view invite)
while (std::cin) {
  const std: : string ligne = lireLigne (invite);
double note();
if (!estReelstrict(ligne, note)) {
std:: cout « " Saisie invalide : entrez un nombre (ex. 12.5 ou 12,5). In";
› else it (!estnotevalide(note)) {
std::cout ‹‹" La note doit être comprise entre " ‹‹ noteMin ‹‹ " et " ‹‹ noteMax ‹< ".\n":
else
return note.
return noteMin;
} / namespace uin
