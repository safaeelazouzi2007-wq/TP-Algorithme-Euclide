# Travaux Pratiques : Algorithme d’Euclide

## 🎯 Objectif
Calculer le PGCD (Plus Grand Commun Diviseur) de deux entiers en utilisant l’algorithme d’Euclide.

---

## 🧠 Rappel théorique
Le *PGCD* de deux entiers est le plus grand nombre qui les divise tous les deux sans reste.  
L’*algorithme d’Euclide* consiste à remplacer le couple (a, b) par (b, reste) jusqu’à ce que le reste soit nul.

---

## 🧮 Exemples de calculs manuels
48 ÷ 18 = 2 reste 12
18 ÷ 12 = 1 reste 6
12 ÷ 6 = 2 reste 0
→ PGCD(48, 18) = 6
25 ÷ 15 = 1 reste 10
15 ÷ 10 = 1 reste 5
10 ÷ 5 = 2 reste 0
→ PGCD(25, 15) = 5
---

## 🧰 Résultats des tests

| a  | b  | PGCD attendu | PGCD obtenu |
|----|----|---------------|-------------|
| 48 | 18 | 6             | 6           |
| 25 | 15 | 5             | 5           |
| 81 | 27 | 27            | 27          |

---

## ✅ Conclusion
L’algorithme d’Euclide est très efficace.  
Il nécessite peu d’opérations et donne le résultat rapidement, même pour de grands nombres.
