# Travaux Pratiques : Algorithme d’Euclide
 🎯 Objectif
Calculer le PGCD (Plus Grand Commun Diviseur) de deux entiers en utilisant l’algorithme d’Euclide.
 🧠 Rappel théorique
Le *PGCD* de deux entiers est le plus grand nombre qui les divise tous les deux sans reste.  
L’*algorithme d’Euclide* consiste à remplacer le couple (a, b) par (b, reste) jusqu’à ce que le reste soit nul.
🧮 Exemples de calculs manuels
48 ÷ 18 = 2 reste 12
18 ÷ 12 = 1 reste 6
12 ÷ 6 = 2 reste 0
→ PGCD(48, 18) = 6
25 ÷ 15 = 1 reste 10
15 ÷ 10 = 1 reste 5
10 ÷ 5 = 2 reste 0
→ PGCD(25, 15) = 5

 🧰 Résultats des tests

| a  | b  | PGCD attendu | PGCD obtenu |
|----|----|---------------|-------------|
| 48 | 18 | 6             | 6           |
| 25 | 15 | 5             | 5           |
| 81 | 27 | 27            | 27          |

✅ Conclusion
L’algorithme d’Euclide est très efficace.  
Il nécessite peu d’opérations et donne le résultat rapidement, même pour de grands nombres.


# Traveaux pratiques:Équations Diophantiennes Linéaires
🎯 Objectif

Ce TP a pour but de déterminer toutes les solutions entières (x, y) de l’équation :

ax + by = c

en utilisant l’algorithme d’Euclide et l’algorithme d’Euclide étendu.

⸻

⚙ Étapes principales
	1.	Calcul du PGCD (d = pgcd(a, b))
Utilisation de l’algorithme d’Euclide pour déterminer le plus grand commun diviseur.
	2.	Vérification de l’existence des solutions
	•	Si d ne divise pas c → pas de solution entière.
	•	Si d divise c → il existe au moins une solution entière.
	3.	Trouver une solution particulière (xp, yp)
À partir des coefficients obtenus avec l’algorithme d’Euclide étendu :
d = ax₀ + by₀
On déduit :
xp = x₀ × (c / d),  yp = y₀ × (c / d)
	4.	Donner la solution générale
Toutes les solutions s’écrivent sous la forme :
(x, y) = (xp + (b/d)k, yp − (a/d)k),  k ∈ ℤ

⸻

💻 Fonctionnement du programme

Le programme :
	•	Demande à l’utilisateur d’entrer les valeurs de a, b et c
	•	Calcule le pgcd(a, b)
	•	Vérifie si des solutions entières existent
	•	Affiche une solution particulière et la forme générale de toutes les solutions
  Entrez a, b et c : 12 18 6
Exemples :
pgcd(12, 18) = 6
=> Il existe des solutions entières.

Solution particulière : (xp, yp) = (1, 0)
Solution générale : (x, y) = (1 + 3k, 0 - 2k), k ∈ Z
👩‍💻 Auteur
Projet réalisé par Safae Elazouzi
Module :math (Algèbre)
NIVEAU DUT: — Génie Logiciel — EST
